#include <stdio.h>

int main() {

    int prato, sobremesa, bebida;
    int calouria_prato = 0, calouria_sobremesa = 0, calouria_bebida = 0;
    int total_calouria = 0;

    printf("Escolha uma opcao de prato por favor: ");
    printf("1 - Vegetariano ");
    printf(" 2 - Peixe");
    printf("\n3 - Frango ");
    printf(" 4- Carne\n");
    scanf("%d", &prato);

    printf("Escolha uma opcao de sobremesa por favor: ");
    printf("1 - Abacaxi ");
    printf(" 2 - Sorvete Diet");
    printf("\n3 - Mouse Diet ");
    printf(" 4- Mouse Chocolate\n");
    scanf("%d", &sobremesa);

    printf("Escolha uma opcao de bebida por favor: ");
    printf("1 - Cha ");
    printf(" 2 - Suco Laranja");
    printf("\n3 - Suco Melao ");
    printf(" 4- Refirgerante Diet\n");
    scanf("%d", &bebida);

    switch(prato) {
        case 1:
            calouria_prato = 180;
            break;
        case 2:
            calouria_prato = 230;
            break;
        case 3:
            calouria_prato = 250;
            break;
        case 4:
            calouria_prato = 350;
            break;
    }

    switch(sobremesa) {
        case 1:
            calouria_sobremesa = 75;
            break;
        case 2:
            calouria_sobremesa = 110;
            break;
        case 3:
            calouria_sobremesa = 170;
            break;
        case 4:
            calouria_sobremesa = 200;
            break;
    }

    switch(bebida) {
        case 1:
            calouria_bebida = 20;
            break;
        case 2:
            calouria_bebida = 70;
            break;
        case 3:
            calouria_bebida = 100;
            break;
        case 4:
            calouria_bebida = 65;
            break;
    }

    total_calouria = calouria_bebida + calouria_prato + calouria_sobremesa;
    printf("\n\nO total de calorias que voce vai ganhar comendo isso e: %d", total_calouria);
}