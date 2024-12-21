#include <stdio.h>

double litro_c, metro_c, ml_c, metro_cubico, litro, mililitro;
int escolha, converter;

int main() {

    printf("Qual unidade voce deseja converter \n \n 1 - Litro \n 2 - Metro Cubico \n 3 - Mililitro \n");
    scanf("%d", &escolha);

    switch (escolha) {
    case 1:

        printf("Digite o valor em Litros: \n");
        scanf("%0.2lf", &litro);

        printf("Deseja converter Para: \n \n 1 - Metro Cubico \n 2 - Mililitro \n");
        scanf("%d", &converter);

        if (converter == 1) {
            metro_c = litro / 1000;
            printf("%.2lf Litros = %.6lf Metros Cubicos\n", litro, metro_c);
        } else {
            ml_c = litro * 1000;
            printf("%.2lf Litros = %.2lf Mililitros\n", litro, ml_c);
        }

        break;

    case 2:

        printf("Digite o valor em Metros Cubicos: \n");
        scanf("%0.2lf", &metro_cubico);

        printf("Deseja converter Para: \n \n 1 - Litro \n 2 - Mililitro \n \n");
        scanf("%d", &converter);

        if (converter == 1) {
            litro_c = metro_cubico * 1000;
            printf("%.2lf Metros Cubicos = %.2lf Litros\n", metro_cubico, litro_c);
        } else {
            ml_c = metro_cubico * 1000000;
            printf("%.2lf Metros Cubicos = %.2lf Mililitros\n", metro_cubico, ml_c);
        }

        break;

    case 3:

        printf("Digite o valor em Mililitros: \n");
        scanf("%0.2lf", &mililitro);

        printf("Deseja converter Para: \n \n 1 - Metro Cubico \n 2 - Litro \n");
        scanf("%d", &converter);

        if (converter == 1) {
            metro_c = mililitro / 1000000;
            printf("%.2lf Mililitros = %.2lf Metros Cubicos\n", mililitro, metro_c);
        } else {
            litro_c = mililitro / 1000;
            printf("%.2lf Mililitros = %.2lf Litros\n", mililitro, litro_c);
        }

        break;

    default:
        printf("Opcao invalida\n");
        break;
    }

    return 0;
}