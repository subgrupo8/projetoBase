/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de Programação
 * Tarefa: depuração e versionamento
 * Residentes:
 *  - Lucas Meira de Souza Leite
 *  - Ruth Coelho Ferreira
 *  -
 *  -
 *  -
 *  -
 *  -
 *  -
 *  -
 *******************************************************************************/

/*
    Programa para realizar conversor de unidades de comprimento, massa, volume, entre outros
*/

#include <stdio.h>
#include <stdlib.h> //Necessário para o system("cls")
#include <locale.h> //Necessário para o setlocale

void conversorTemperatura();

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); // Necessário para exibição de palavras com acento
    int escolha = 0;
    char continuar = 'N';
    do
    {
        system("cls"); // Limpa a tela a cada iteração
        printf("********************************************\n");
        printf("***         Conversor de Unidades        ***\n");
        printf("********************************************\n");
        printf(" 1 - Unidades de comprimento                \n");
        printf(" 2 - Unidades de massa                      \n");
        printf(" 3 - Unidades de volume                     \n");
        printf(" 4 - Unidades de temperatura                \n");
        printf(" 5 - Unidades de velocidade                 \n");
        printf(" 6 - Unidades de energia                    \n");
        printf(" 7 - Unidades de area                       \n");
        printf(" 8 - Unidades de tempo                      \n");
        printf(" 9 - Unidades de armazenamento              \n");
        printf("********************************************\n");
        printf("Escolha uma opção:      ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            // chamada da função
            break;
        case 2:
            // chamada da função
            break;
        case 3:
            // chamada da função
            break;
        case 4:
            conversorTemperatura();
            break;
        case 5:
            // chamada da função
            break;
        case 6:
            // chamada da função
            break;
        case 7:
            // chamada da função
            break;
        case 8:
            // chamada da função
            break;
        case 9:
            // chamada da função
            break;
        default:
            printf("Opção inválida.\n");
        }
        printf("\nDeseja escolher outra opção? (S/N)");
        scanf(" %c", &continuar); // O espaço antes de %c é necessário para ignorar espaços em branco e realmente ler a variável
    } while ((continuar == 'S') || (continuar == 's'));

    return 0;
    system("PAUSE");
}

float kelvin_fahrenheit(float kelvin)
{
    return (kelvin - 273) * 1.8 + 32;
}

float kelvin_celsius(float kelvin)
{
    return kelvin - 273.15;
}

float fahrenheit_kelvin(float fahrenheit)
{
    return (fahrenheit - 32) * 0.556 + 273;
}

float fahrenheit_celsius(float fahrenheit)
{
    return fahrenheit = (fahrenheit - 32) / 1.8;
}

float celsius_kelvin(float celsius)
{
    return celsius + 273;
}

float celsius_fahrenheit(float celsius)
{
    return celsius * 1.8 + 32;
}

void conversorTemperatura()
{
    int escolha = 0;
    float kelvin = 0, celsius = 0, fahrenheit = 0;

    printf("*************************************************\n");
    printf("***         Conversor de Temperatura          ***\n");
    printf("*************************************************\n");
    printf("1 - Kelvin para Fahrenheit\n");
    printf("2 - Kelvin para Celsius\n");
    printf("3 - Fahrenheit para Kelvin\n");
    printf("4 - Fahrenheit para Celsius\n");
    printf("5 - Celsius para Kelvin\n");
    printf("6 - Celsius para Fahrenheit\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Insira o valor da temperatura: ");
        scanf("%f", &kelvin);
        fahrenheit = kelvin_fahrenheit(kelvin);
        printf("O valor da temperatura em Fahrenheit é: %.2f", fahrenheit);
        break;
    case 2:
        printf("Insira o valor da temperatura: ");
        scanf("%f", &kelvin);
        celsius = kelvin_celsius(kelvin);
        printf("O valor da temperatura em Celsius é: %.2f", celsius);
        break;
    case 3:
        printf("Insira o valor da temperatura: ");
        scanf("%f", &fahrenheit);
        kelvin = fahrenheit_kelvin(fahrenheit);
        printf("O valor da temperatura em Kelvin é: %.2f", kelvin);
        break;
    case 4:
        printf("Insira o valor da temperatura: ");
        scanf("%f", &fahrenheit);
        celsius = fahrenheit_celsius(celsius);
        printf("O valor da temperatura em Kelvin é: %.2f", celsius);
        break;
    case 5:
        printf("Insira o valor da temperatura: ");
        scanf("%f", &celsius);
        kelvin = celsius_kelvin(celsius);
        printf("O valor da temperatura em Kelvin é: %.2f", kelvin);
        break;
    case 6:
        printf("Insira o valor da temperatura: ");
        scanf("%f", &celsius);
        fahrenheit = celsius_fahrenheit(celsius);
        printf("O valor da temperatura em Fahrenheit é: %.2f", fahrenheit);
        break;
    }
}