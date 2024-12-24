#include <stdio.h>
#include <math.h>
#include <assert.h>

// Funções de conversão de unidades de velocidade
float kmParaMs(float valor) {
    return valor * 0.277778;
}

float kmParaMph(float valor) {
    return valor * 0.621371;
}

float msParaKm(float valor) {
    return valor * 3.6;
}

float msParaMph(float valor) {
    return valor * 2.23694;
}

float mphParaKm(float valor) {
    return valor * 1.60934;
}

float mphParaMs(float valor) {
    return valor * 0.44704;
}

// Função de testes da conversão de velocidade
void testar_conversoes_velocidade() {
    const float tolerancia = 0.001; // Ajuste na tolerância

    // Testando km/h para m/s
    assert(fabs(kmParaMs(100.0) - 27.7778) < tolerancia);

    // Testando km/h para mph
    assert(fabs(kmParaMph(100.0) - 62.1371) < tolerancia);

    // Testando m/s para km/h
    assert(fabs(msParaKm(27.7778) - 100.0) < tolerancia);

    // Testando m/s para mph
    assert(fabs(msParaMph(10.0) - 22.3694) < tolerancia);

    // Testando mph para km/h
    assert(fabs(mphParaKm(62.1371) - 100.0) < tolerancia);

    // Testando mph para m/s
    assert(fabs(mphParaMs(22.3694) - 10.0) < tolerancia);

    printf("Todos os testes de conversão de velocidade passaram com sucesso!\n");
}

int main() {
    // Executa os testes das funções
    testar_conversoes_velocidade();

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

    // Lógica para chamar as funções específicas diretamente
    if (unidadeOrigem == 'k' && unidadeDestino == 'm') {
        printf("%.2f km/h = %.2f m/s\n", valor, kmParaMs(valor));
    } else if (unidadeOrigem == 'k' && unidadeDestino == 'p') {
        printf("%.2f km/h = %.2f mph\n", valor, kmParaMph(valor));
    } else if (unidadeOrigem == 'm' && unidadeDestino == 'k') {
        printf("%.2f m/s = %.2f km/h\n", valor, msParaKm(valor));
    } else if (unidadeOrigem == 'm' && unidadeDestino == 'p') {
        printf("%.2f m/s = %.2f mph\n", valor, msParaMph(valor));
    } else if (unidadeOrigem == 'p' && unidadeDestino == 'k') {
        printf("%.2f mph = %.2f km/h\n", valor, mphParaKm(valor));
    } else if (unidadeOrigem == 'p' && unidadeDestino == 'm') {
        printf("%.2f mph = %.2f m/s\n", valor, mphParaMs(valor));
    } else {
        printf("Conversão inválida. Verifique as unidades de origem e destino.\n");
    }

    return 0;
}
