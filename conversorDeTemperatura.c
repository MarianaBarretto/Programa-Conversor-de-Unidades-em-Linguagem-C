#include <stdio.h>

float celsiusFahrenheit(float celsius){
    return celsius * 9.0 / 5.0 + 32; 
}

float celsiusKelvin(float celsius){
    return celsius + 273.15;
}

float fahrenheitCelsius(float fahrenheit){
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float fahrenheitKelvin(float fahrenheit){
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

float kelvinCelsius(float kelvin){
    return kelvin - 273.15; 
}

float kelvinFahrenheit(float kelvin){
    return (kelvin - 273.15) * 9.0 / 5.0 + 32; 
}


int main(){
    

    char escolha[] = 
        "1. Celsius para Fahrenheit;\n"
        "2. Celsius para Kelvin;\n"
        "3. Fahrenheit para Celsius;\n"
        "4. Fahrenheit para Kelvin;\n"
        "5. Kelvin para Celsius;\n"
        "6. Kelvin para Fahrenheit.\n"
        "7. Sair\n";

    int opcao;
    float valor, resultado;

    do
    {  
        printf("=================================================\n");
        printf("Escolha uma opção:\n%s", escolha);
        printf("=================================================\n");
        printf("Digite a opção: ");        
        scanf("%d", &opcao);

        if (opcao == 7) {
            printf("=================================================\n");
            printf("Saindo do programa...\n");
            break; 
        }
        printf("=================================================\n");
        printf("Agora digite o valor a ser convertido: ");
        scanf("%f", &valor);
        printf("====================RESULTADO====================\n");

        

        switch (opcao) {
            case 1:
                resultado = celsiusFahrenheit(valor);
                printf("%.2f Celsius equivale a %.1f Fahrenheit\n", valor, resultado);
                break;
            case 2:
                resultado = celsiusKelvin(valor);
                printf("%.2f Celsius equivale a %.1f Kelvin\n", valor, resultado);
                break;
            case 3: 
                resultado = fahrenheitCelsius(valor);
                printf("%.2f Fahrenheit equivale a %.1f Celsius\n", valor, resultado);
                break;
            case 4: 
                resultado = fahrenheitKelvin(valor);
                printf("%.2f Fahrenheit equivale a %.1f Kelvin\n", valor, resultado);
                break;
            case 5: 
                resultado = kelvinCelsius(valor);
                printf("%.2f Kelvin equivale a %.1f Celsius\n", valor, resultado);
                break;
            case 6: 
                resultado = kelvinFahrenheit(valor);
                printf("%.2f Kelvin equivale a %.1f Fahrenheit\n", valor, resultado);
                break;        
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;  // Caso a opção não seja válida
        }

    } while (opcao != 7); 
        
    
    return 0;
}
