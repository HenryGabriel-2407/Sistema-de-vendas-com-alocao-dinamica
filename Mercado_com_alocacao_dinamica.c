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
    int a = 0;
    while (a < 1){
        bemvindo();
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            produtos();
            int*quantidade;
            quantidade = malloc(5*sizeof(int));
            for (int i=0;i<5;++i){
                *quantidade = i+1;
                printf("Quantidade %d:\t",*quantidade);
            }
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