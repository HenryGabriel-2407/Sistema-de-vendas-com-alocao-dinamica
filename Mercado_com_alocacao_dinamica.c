#include <stdio.h>
#include <stdlib.h>
void bemvindo(){
    printf("Bem vindo a Festa Junina Uniavan\n");
    printf("Digite em...\n1 - Iniciar compras\n2 - Ver lista de produtos\n3 - Sair\nDigite: ");
}
//bem- vindo
void produtos(){
    printf("\nCodigo\t\tComidas\t\tPreco\n");
    printf("0 - Cachorro quente.........RS5.00\n");
    printf("1 - Pipoca..................RS3.50\n");
    printf("2 - Guarana.................RS4.90\n");
    printf("3 - Algodao-Doce............RS8.70\n");
    printf("4 - Hamburguer com Bacon....RS12.00\n");
    printf("5 - Batata-Frita............RS6.00\n");
    printf("6 - Churros.................RS10.00\n");
    printf("7 - Vatapa..................RS7.80\n");
    printf("8 - Churrasco no espeto.....RS9.90\n");
    printf("9 - Mousse de Cupuacu.......RS2.50\n\n");
}
// produtos
int main(){
    int escolha;
    float opcoes[10] = {5.00, 3.50, 4.90, 8.70, 12.00, 6.00, 10.00, 7.80, 9.90, 2.50};
    char nome[10][30] = {"Cachorro quente", "Pipoca", "Guarana", "Algodao-Doce", "Hamburguer com Bacon", "Batata-Frita", "Churros", "Vatapa", "Churrasco no espeto", "Mousse de Cupuacu"};
    do{
        bemvindo();
        scanf("%d", &escolha);
        if (escolha == 1){
            produtos();
            int*num;
            num = malloc(sizeof(int));
            int*quantidade;
            quantidade = malloc(sizeof(int));
            int codigo;
            codigo = malloc(sizeof(int));
            float*valor;
            valor = malloc(sizeof(float));
            float total = 0;
            int a = 0;
            int b = 0;
            for (int i = 0; i <= a; i++){
                printf("Digite o codigo do produto numero %d: ", i+1);
                scanf("%d", &codigo);
                printf("Digite a quantidade do %s :", nome[codigo]);
                scanf("%d", &quantidade[i]);
                printf("%.2f\n", opcoes[codigo]* quantidade[i]);
                valor[i] = opcoes[codigo]*quantidade[i];
                total += valor[i];
                num[i]= nome[codigo];
                printf("Quer continuar? [1 - SIM / 0 - NAO ]: ");
                scanf("%d", &b);
                if (b == 1){
                    ++a;
                    continue;
                }
                printf("Quer excluir produto? [1 - SIM / 0 - NAO ]: ");
                scanf("%d", &b);
                if (b == 1) {
                    printf("Digite o numero do item do produto a ser excluido: ");
                    scanf("%d", &codigo);
                    for (int i = 0; i <= a; i++) {
                        if (quantidade[i-1] > 0 && i == codigo) {
                            total -= valor[i-1];
                            quantidade[i-1] = 0;
                            valor[i-1] = 0;
                        }
                    }
                }
                printf("\nQuer alterar a quantidade produto? [1 - SIM / 0 - NAO ]: ");
                scanf("%d", &b);
                if (b == 1) {
                    int nova_quantidade;
                    printf("Digite o numero do item que deseja alterar: ");
                    scanf("%d", &codigo);
                    printf("Digite a nova quantidade: ");
                    scanf("%d", &nova_quantidade);
                    for (int i = 0; i <= a; i++)
                    {
                        if (quantidade[codigo-1] > 0)
                        {
                            total -= valor[codigo-1];
                            valor[codigo-1] = opcoes[codigo-1] * nova_quantidade;
                            total += valor[codigo-1];
                            quantidade = nova_quantidade;
                        }
                        
                    }
                }
                
                
                printf("\n---------------------COMANDA---------------------\n");
                for (int j = 0; j <= a; j++){
                    if (quantidade[j] > 0){
                            printf("%d\t%d - %s - %.2f\n",j+1, quantidade[j], num[j], valor[j]);
                    }
                }
            }
            printf("-------------------------------------------------\n");
            printf("\t\tRS %.2f\n\n", total);
        }
        else if (escolha == 2){
            produtos();
        }
        else{
            printf("Adeus!!!!\n");
            break;
        }
    
    }while(escolha == 1 || escolha == 2);
}