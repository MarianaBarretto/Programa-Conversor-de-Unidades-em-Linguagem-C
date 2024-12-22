#include <stdio.h>

// Função para converter entre as unidades de velocidade
void converterVelocidade(float valor, char unidadeOrigem, char unidadeDestino) {
    float resultado;
    
    switch (unidadeOrigem) {
        case 'k': // Origem em km/h
            switch (unidadeDestino) {
                case 'm': // Para m/s
                    resultado = valor * 0.277778;
                    printf("%.2f km/h = %.2f m/s\n", valor, resultado);
                    break;
                case 'p': // Para mph
                    resultado = valor * 0.621371;
                    printf("%.2f km/h = %.2f mph\n", valor, resultado);
                    break;
                default:
                    printf("Unidade de destino inválida.\n");
            }
            break;

        case 'm': // Origem em m/s
            switch (unidadeDestino) {
                case 'k': // Para km/h
                    resultado = valor * 3.6;
                    printf("%.2f m/s = %.2f km/h\n", valor, resultado);
                    break;
                case 'p': // Para mph
                    resultado = valor * 2.23694;
                    printf("%.2f m/s = %.2f mph\n", valor, resultado);
                    break;
                default:
                    printf("Unidade de destino inválida.\n");
            }
            break;

        case 'p': // Origem em mph
            switch (unidadeDestino) {
                case 'k': // Para km/h
                    resultado = valor * 1.60934;
                    printf("%.2f mph = %.2f km/h\n", valor, resultado);
                    break;
                case 'm': // Para m/s
                    resultado = valor * 0.44704;
                    printf("%.2f mph = %.2f m/s\n", valor, resultado);
                    break;
                default:
                    printf("Unidade de destino inválida.\n");
            }
            break;

        default:
            printf("Unidade de origem inválida.\n");
    }
}

int main() {
    float valor;
    char unidadeOrigem, unidadeDestino;

    // Pergunta ao usuário qual unidade de origem ele quer converter
    printf("Digite a unidade de origem (k = km/h, m = m/s, p = mph): ");
    scanf(" %c", &unidadeOrigem);

    // Pergunta ao usuário qual unidade de destino ele quer
    printf("Digite a unidade de destino (k = km/h, m = m/s, p = mph): ");
    scanf(" %c", &unidadeDestino);

    // Pergunta o valor da velocidade
    printf("Digite o valor da velocidade: ");
    scanf("%f", &valor);

    // Chamando a função para converter
    converterVelocidade(valor, unidadeOrigem, unidadeDestino);

    return 0;
}
