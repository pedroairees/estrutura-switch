#include <stdio.h>
#include <stdlib.h>

int main() {

    int ddd;
    printf("Me informe o seu DDD por favor: ");
    scanf("%d", &ddd);

    switch(ddd){
        case 61:
            printf("Brasilia");
            break;
        case 71:
            printf("Salvador");
            break;
        case 11:
            printf("Sao Paulo");
            break;
        case 21:
            printf("Rio de Janeiro");
            break;
        case 32:
            printf("Juiz de Fora");
            break;
        case 19:
            printf("Campinas");
            break;
        case 27:
            printf("Vitoria");
            break;
        case 31:
            printf("Belo Horizonte");
            break;
        default:
            printf("Uma cidade no Brasil sem identificacao\n");
            break;
    }

}