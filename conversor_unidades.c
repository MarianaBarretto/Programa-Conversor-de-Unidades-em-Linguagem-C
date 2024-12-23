#include <stdio.h>
#include <assert.h>
#include <math.h>

// Funções de conversão de temperatura
float celsiusFahrenheit(float celsius) {
    return celsius * 9.0 / 5.0 + 32; 
}

float celsiusKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float fahrenheitKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

float kelvinCelsius(float kelvin) {
    return kelvin - 273.15; 
}

float kelvinFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32; 
}

//Funções de conversão de potência
float watts_para_kilowatts (float watts) {
    return watts/1000.0;
}

float watts_para_cavalo_vapor (float watts) {
    return watts/735.49875;
}

float kilowatts_para_watts (float kilowatts) {
    return kilowatts*1000.0;
}

float kilowatts_para_cavalo_vapor (float kilowatts) {
    return kilowatts*1000.0/735.49875;
}

float cavalo_vapor_para_watts (float cv) {
    return cv*735.49875;
}

float cavalo_vapor_para_kilowatts (float cv) {
    return cv*735.49875/1000.0;
}

// Funções de conversão de tempo
float segundos_para_minutos(float segundos) {
    return segundos / 60;
}

float segundos_para_horas(float segundos) {
    return segundos / 3600;
}

float minutos_para_segundos(float minutos) {
    return minutos * 60;
}

float minutos_para_horas(float minutos) {
    return minutos / 60;
}

float horas_para_segundos(float horas) {
    return horas * 3600;
}

float horas_para_minutos(float horas) {
    return horas * 60;
}

// Função para testar as conversões de temperatura
void testar_conversao_temperatura() {
    // Testando as conversões de temperatura
    assert(fabs(celsiusFahrenheit(0) - 32.0) < 0.0001); // Comparação com tolerância
    assert(fabs(celsiusKelvin(0) - 273.15) < 0.0001);   // Comparação com tolerância
    assert(fabs(fahrenheitCelsius(32) - 0.0) < 0.0001);  // Comparação com tolerância
    assert(fabs(fahrenheitKelvin(32) - 273.15) < 0.0001); // Comparação com tolerância
    assert(fabs(kelvinCelsius(273.15) - 0.0) < 0.0001);    // Comparação com tolerância
    assert(fabs(kelvinFahrenheit(273.15) - 32.0) < 0.0001); // Comparação com tolerância

    printf("Testes de conversão de temperatura passaram com sucesso!\n");
}

// Função para testar as conversões de tempo
void testar_conversao() {
    // Testando as conversões
    assert(segundos_para_minutos(60) == 1.0);
    assert(segundos_para_horas(3600) == 1.0);
    assert(minutos_para_segundos(1) == 60.0);
    assert(minutos_para_horas(60) == 1.0);
    assert(horas_para_segundos(1) == 3600.0);
    assert(horas_para_minutos(1) == 60.0);

    printf("Testes de conversão de tempo passaram com sucesso!\n");
}

// Função para mostrar o menu de escolha de unidade de tempo
void mostrar_menu_temperatura() {
    printf("Escolha a unidade de temperatura que deseja converter:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
}

// Função para mostrar o menu principal
void mostrar_menu_principal() {
    printf("=================================================\n");
    printf("Escolha o tipo de conversão que deseja realizar:\n");
    printf("1. Conversão de Tempo\n");
    printf("2. Conversão de Temperatura\n");
    printf("3. Sair\n");
    printf("=================================================\n");
}

// Função que simula a conversão de unidades de tempo
void testar_menu_unidade_tempo(int opcao_unidade, float valor) {
    if (opcao_unidade == 1) {
        printf("Conversão de %.2f segundos:\n", valor);
        printf("%.2f segundos equivalem a %.2f minutos.\n", valor, segundos_para_minutos(valor)); // Converte para minutos
        printf("%.2f segundos equivalem a %.2f horas.\n", valor, segundos_para_horas(valor));   // Converte para horas
    } else if (opcao_unidade == 2) {
        printf("Conversão de %.2f minutos:\n", valor);
        printf("%.2f minutos equivalem a %.2f segundos.\n", valor, minutos_para_segundos(valor)); // Converte para segundos
        printf("%.2f minutos equivalem a %.2f horas.\n", valor, minutos_para_horas(valor));     // Converte para horas
    } else if (opcao_unidade == 3) {
        printf("Conversão de %.2f horas:\n", valor);
        printf("%.2f horas equivalem a %.2f segundos.\n", valor, horas_para_segundos(valor));   // Converte para segundos
        printf("%.2f horas equivalem a %.2f minutos.\n", valor, horas_para_minutos(valor));     // Converte para minutos
    } else {
        printf("Opção de unidade inválida!\n");
    }
}

// Função para testar a conversão de temperatura
void testar_menu_unidade_temperatura(int opcao_unidade, float valor) {
    if (opcao_unidade == 1) {
        printf("Conversão de %.2f Celsius:\n", valor);
        printf("%.2f Celsius equivale a %.2f Fahrenheit.\n", valor, celsiusFahrenheit(valor));
        printf("%.2f Celsius equivale a %.2f Kelvin.\n", valor, celsiusKelvin(valor));
    } else if (opcao_unidade == 2) {
        printf("Conversão de %.2f Fahrenheit:\n", valor);
        printf("%.2f Fahrenheit equivale a %.2f Celsius.\n", valor, fahrenheitCelsius(valor));
        printf("%.2f Fahrenheit equivale a %.2f Kelvin.\n", valor, fahrenheitKelvin(valor));
    } else if (opcao_unidade == 3) {
        printf("Conversão de %.2f Kelvin:\n", valor);
        printf("%.2f Kelvin equivale a %.2f Celsius.\n", valor, kelvinCelsius(valor));
        printf("%.2f Kelvin equivale a %.2f Fahrenheit.\n", valor, kelvinFahrenheit(valor));
    } else {
        printf("Opção de unidade inválida!\n");
    }
}

int main() {
    // Simulando os testes do código
    printf("Iniciando testes...\n");
    
    // Testes das funções de conversão
    testar_conversao_temperatura();
        

    // Interação com o usuário
    int opcao_principal;
    do {
        // Exibe o menu principal
        mostrar_menu_principal();
        printf("Digite sua opção: ");
        if (scanf("%d", &opcao_principal) != 1) {
            printf("Erro na entrada! Tente novamente.\n");
            return 1; // Encerra o programa em caso de erro na entrada
        }

        switch (opcao_principal) {
            case 1: { // Conversão de tempo
                int unidade_tempo;
                float valor;

                // Exibe o menu de escolha da unidade
                mostrar_menu_tempo();
                printf("Digite sua opção (1/2/3): ");
                if (scanf("%d", &unidade_tempo) != 1) { // Verifica se a entrada foi lida corretamente
                    printf("Erro na entrada! Tente novamente.\n");
                    return 1; // Encerra o programa em caso de erro na entrada
                }

                // Verifica se a escolha é válida
                if (unidade_tempo < 1 || unidade_tempo > 3) {
                    printf("Opção inválida! Tente novamente.\n");
                    continue; // Volta para o início do menu principal
                }

                // Solicita o valor a ser convertido
                printf("Digite o valor a ser convertido: ");
                if (scanf("%f", &valor) != 1) { // Verifica se o valor foi lido corretamente
                    printf("Erro na entrada do valor! Tente novamente.\n");
                    return 1; // Encerra o programa em caso de erro na entrada do valor
                }

                // Realizando as conversões dependendo da unidade escolhida
                testar_menu_unidade_tempo(unidade_tempo, valor);
                break;
            }

            case 2: { // Conversão de temperatura
                int unidade_temperatura;
                float valor;

                // Exibe o menu de escolha da unidade
                mostrar_menu_temperatura();
                printf("Digite sua opção (1/2/3): ");
                if (scanf("%d", &unidade_temperatura) != 1) {
                    printf("Erro na entrada! Tente novamente.\n");
                    return 1; // Encerra o programa em caso de erro na entrada
                }

                // Verifica se a escolha é válida
                if (unidade_temperatura < 1 || unidade_temperatura > 3) {
                    printf("Opção inválida! Tente novamente.\n");
                    continue; // Volta para o início do menu principal
                }

                // Solicita o valor a ser convertido
                printf("Digite o valor a ser convertido: ");
                if (scanf("%f", &valor) != 1) {
                    printf("Erro na entrada! Tente novamente.\n");
                    return 1; // Encerra o programa em caso de erro na entrada
                }

                // Realizando as conversões dependendo da unidade escolhida
                testar_menu_unidade_temperatura(unidade_temperatura, valor);
                break;
            }

            case 3: { // Sair
                printf("Saindo do programa...\n");
                break;
            }

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao_principal != 3);

    return 0;
}
