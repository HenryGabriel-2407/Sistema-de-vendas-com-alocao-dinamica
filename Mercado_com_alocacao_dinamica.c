#include <stdio.h>
#include <stdlib.h>
void bemvindo(){
    printf("Bem vindo a Festa Junina Uniavan\n");
    printf("Digite em...\n1 - Iniciar compras\n2 - Ver lista de produtos\n3 - Sair\nDigite: ");
}
void produtos(){
    printf("\nCodigo\tComidas\tPreco\n");
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
int main(){
    int escolha;
    float opcoes[10] = {5.00, 3.50, 4.90, 8.70, 12.00, 6.00, 10.00, 7.80, 9.90, 2.50};
    char nome[10][30] = {"Cachorro quente", "Pipoca", "Guarana", "Algodao-Doce", "Hamburguer com Bacon", "Batata-Frita", "Churros", "Vatapa", "Churrasco no espeto", "Mousse de Cupuacu"};
    int a = 0;
    while (a < 1){
        bemvindo();
        scanf("%d", &escolha);
        if (escolha == 1){
            produtos();
            float*preco = 0;
            preco = malloc(5*sizeof(float));
            float*total;
            total = malloc(5*sizeof(float));
            float valor_total = 0;
            int*codigo;
            codigo = malloc(5*sizeof(int));
            int*quant;
            quant = malloc(5*sizeof(int));
            for (int i=0;i<5;++i){
                printf("Informe o codigo do item %d:\n", i );
                scanf("%d",&codigo[i]);
                printf("Informe a quantidade do %s:\n", nome[codigo[i]] );
                scanf("%d",&quant[i]);
                total[i] = opcoes[i]*quant[i];
                valor_total += total[i];
                }
                int b = 0;
                printf("Desejas adicionar algo no carrinho? [1 - SIM/ 0 - NÃO] : ");
                scanf("%d", &b);
                printf("%.2f\n", valor_total);
        }
        

        else if (escolha == 2){
            produtos();
        }

        else{
            printf("Adeus!!!!\n");
            break;
        }
    }
    
    
    
    



}