#include <stdio.h>

int main() {

    int pedido;
    printf("Ola, a seguir mostrarei o cardapio:\n");

    printf("\n100 - Cachorro quente");
    printf("\n101 - Bauru simples");
    printf("\n102 - Bauru c/ ovo");
    printf("\n103 - Hamburguer");
    printf("\n104 - Cheesburguer\n\n");

    printf("Escolha seu pedido por favor: ");
    scanf("%d", &pedido);

    switch(pedido){
        case 100:
            printf("\nSeu pedido do Cachorro quente, foi feito!\n");
            break;
        case 101:
            printf("\nSeu pedido do Bauru simples, foi feito!\n");
            break;
         case 102:
            printf("\nSeu pedido do Bauru c/ ovo, foi feito!\n");
            break;
        case 103:
            printf("\nSeu pedido do Hamburguer, foi feito!\n");
            break;
        case 104:
            printf("\nSeu pedido do Cheesburguer, foi feito!\n");
            break;
    }
}