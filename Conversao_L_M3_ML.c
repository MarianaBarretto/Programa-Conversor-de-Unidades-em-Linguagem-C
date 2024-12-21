#include <stdio.h>

// Função para converter Litros
void Converter_Litros() {
    double litro, metro_c, ml_c;
    int converter;

    printf("Digite o valor em Litros: \n");
    scanf("%lf", &litro);

    printf("Deseja converter Para: \n\n 1 - Metro Cubico \n 2 - Mililitro \n");
    scanf("%d", &converter);

    if (converter == 1) {
        metro_c = litro / 1000;
        printf("%.2lf Litros = %.6lf Metros Cubicos\n", litro, metro_c);
    } else if (converter == 2) {
        ml_c = litro * 1000;
        printf("%.2lf Litros = %.2lf Mililitros\n", litro, ml_c);
    } else {
        printf("Opcao invalida!\n");
    }
}

// Função para converter Metros Cúbicos
void Converter_Metros_Cubicos() {
    double metro_cubico, litro_c, ml_c;
    int converter;

    printf("Digite o valor em Metros Cubicos: \n");
    scanf("%lf", &metro_cubico);

    printf("Deseja converter Para: \n\n 1 - Litro \n 2 - Mililitro \n\n");
    scanf("%d", &converter);

    if (converter == 1) {
        litro_c = metro_cubico * 1000;
        printf("%.2lf Metros Cubicos = %.2lf Litros\n", metro_cubico, litro_c);
    } else if (converter == 2) {
        ml_c = metro_cubico * 1000000;
        printf("%.2lf Metros Cubicos = %.2lf Mililitros\n", metro_cubico, ml_c);
    } else {
        printf("Opcao invalida!\n");
    }
}

// Função para converter Mililitros
void Converter_Mililitros() {
    double mililitro, litro_c, metro_c;
    int converter;

    printf("Digite o valor em Mililitros: \n");
    scanf("%lf", &mililitro);

    printf("Deseja converter Para: \n\n 1 - Metro Cubico \n 2 - Litro \n");
    scanf("%d", &converter);

    if (converter == 1) {
        metro_c = mililitro / 1000000;
        printf("%.2lf Mililitros = %.6lf Metros Cubicos\n", mililitro, metro_c);
    } else if (converter == 2) {
        litro_c = mililitro / 1000;
        printf("%.2lf Mililitros = %.2lf Litros\n", mililitro, litro_c);
    } else {
        printf("Opcao invalida!\n");
    }
}

int main() {
    int escolha;

    printf("Qual unidade voce deseja converter:\n\n 1 - Litro \n 2 - Metro Cubico \n 3 - Mililitro \n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            Converter_Litros();
            break;

        case 2:
            Converter_Metros_Cubicos();
            break;

        case 3:
            Converter_Mililitros();
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
