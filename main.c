/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de Programaçao
 * Tarefa: depuração e versionamento
 * Residentes:
 *  - Lucas Meira de Souza Leite
 *  - Hugo Martins Santana
 *  - Jonatan Ramos dos Santos
 *  - Cauã Gomes Fraga
 *  - Lethicia Nascimento de Souza
 *  - Ruth Coelho Ferreira
 *  - Josemar Rocha Pedroso
 *  -
 *  -
 *******************************************************************************/

/*
    Programa para realizar conversor de unidades de comprimento, massa, volume, entre outros
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void conversorComprimento(void);
void conversorMassa(void);
void conversorVolume(void);
void conversorVelocidade(void);
void conversorEnergia(void);
void conversorArea(void);
void conversorTempo(void);
void conversorArmazenamento(void);
void conversorTemperatura(void);
void limparBuffer(void);

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    setlocale(LC_NUMERIC, "C");
    int escolha = 0;
    char continuar;

    do
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

        printf("********************************************\n");
        printf("***         Conversor de Unidades        ***\n");
        printf("********************************************\n");
        printf(" 1 - Unidades de comprimento\n");
        printf(" 2 - Unidades de massa\n");
        printf(" 3 - Unidades de volume\n");
        printf(" 4 - Unidades de temperatura\n");
        printf(" 5 - Unidades de velocidade\n");
        printf(" 6 - Unidades de energia\n");
        printf(" 7 - Unidades de area\n");
        printf(" 8 - Unidades de tempo\n");
        printf(" 9 - Unidades de armazenamento\n");
        printf("********************************************\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &escolha) != 1)
        {
            printf("Entrada invalida. Por favor, digite um numero.\n");
            limparBuffer();
            continue;
        }

        switch (escolha)
        {
        case 1:
            conversorComprimento();
            break;
        case 2:
            conversorMassa();
            break;
        case 3:
            conversorVolume();
            break;
        case 4:
            conversorTemperatura();
            break;
        case 5:
            conversorVelocidade();
            break;
        case 6:
            conversorEnergia();
            break;
        case 7:
            conversorArea();
            break;
        case 8:
            conversorTempo();
            break;
        case 9:
            conversorArmazenamento();
            break;
        default:
            printf("Opção inválida.\n");
        }

        do
        {
            printf("\nDeseja escolher outra opcao? (S/N): ");
            limparBuffer();
            scanf(" %c", &continuar);
            continuar = tolower(continuar);
        } while (continuar != 's' && continuar != 'n');

    } while (continuar == 's');

    return 0;
}

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void conversorComprimento()
{
    int escolha;
    double valor, resultado;

    printf("********************************************\n");
    printf("***   Conversor de Unidades de Comprimento   ***\n");
    printf("********************************************\n");
    printf("1 - Metros para Quilometros\n");
    printf("2 - Metros para Centimetros\n");
    printf("3 - Quilômetros para Metros\n");
    printf("4 - Centímetros para Metros\n");
    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada inválida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%lf", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor / 1000;
        printf("%.2lf metros equivalem a %.2lf quilometros\n", valor, resultado);
        break;
    case 2:
        resultado = valor * 100;
        printf("%.2lf metros equivalem a %.2lf centometros\n", valor, resultado);
        break;
    case 3:
        resultado = valor * 1000;
        printf("%.2lf quilometros equivalem a %.2lf metros\n", valor, resultado);
        break;
    case 4:
        resultado = valor / 100;
        printf("%.2lf centimetros equivalem a %.2lf metros\n", valor, resultado);
        break;
    default:
        printf("Opcao invalida.\n");
    }
}

void conversorMassa()
{
    int escolha;
    double valor, resultado;

    printf("********************************************\n");
    printf("***     Conversor de Unidades de Massa     ***\n");
    printf("********************************************\n");
    printf("1 - Quilogramas para Gramas\n");
    printf("2 - Quilogramas para Toneladas\n");
    printf("3 - Gramas para Quilogramas\n");
    printf("4 - Toneladas para Quilogramas\n");
    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%lf", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor * 1000;
        printf("%.2lf quilogramas equivalem a %.2lf gramas\n", valor, resultado);
        break;
    case 2:
        resultado = valor / 1000;
        printf("%.2lf quilogramas equivalem a %.2lf toneladas\n", valor, resultado);
        break;
    case 3:
        resultado = valor / 1000;
        printf("%.2lf gramas equivalem a %.2lf quilogramas\n", valor, resultado);
        break;
    case 4:
        resultado = valor * 1000;
        printf("%.2lf toneladas equivalem a %.2lf quilogramas\n", valor, resultado);
        break;
    default:
        printf("Opcao invalida.\n");
    }
}

void conversorVolume()
{
    int escolha;
    double valor, resultado;

    printf("********************************************\n");
    printf("***     Conversor de Unidades de Volume    ***\n");
    printf("********************************************\n");
    printf("1 - Litros para Mililitros\n");
    printf("2 - Litros para Metros Cubicos\n");
    printf("3 - Mililitros para Litros\n");
    printf("4 - Metros Cúbicos para Litros\n");
    printf("Escolha uma opcao: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%lf", &valor) != 1)
    {
        printf("Entrada inválida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor * 1000;
        printf("%.2lf litros equivalem a %.2lf mililitros\n", valor, resultado);
        break;
    case 2:
        resultado = valor / 1000;
        printf("%.2lf litros equivalem a %.6lf metros cúbicos\n", valor, resultado);
        break;
    case 3:
        resultado = valor / 1000;
        printf("%.2lf mililitros equivalem a %.2lf litros\n", valor, resultado);
        break;
    case 4:
        resultado = valor * 1000;
        printf("%.2lf metros cubicos equivalem a %.2lf litros\n", valor, resultado);
        break;
    default:
        printf("Opção inválida.\n");
    }
}

void conversorTemperatura()
{
    int escolha;
    double valor, resultado;

    printf("********************************************\n");
    printf("***   Conversor de Unidades de Temperatura   ***\n");
    printf("********************************************\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Fahrenheit para Kelvin\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n");

    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada invalida. Por favor, digite um número.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%lf", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um número.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = (valor * 9 / 5) + 32;
        printf("%.2lf °C equivalem a %.2lf °F\n", valor, resultado);
        break;
    case 2:
        resultado = valor + 273.15;
        printf("%.2lf °C equivalem a %.2lf K\n", valor, resultado);
        break;
    case 3:
        resultado = (valor - 32) * 5 / 9;
        printf("%.2lf °F equivalem a %.2lf °C\n", valor, resultado);
        break;
    case 4:
        resultado = (valor - 32) * 5 / 9 + 273;
        printf("%.2lf °F equivalem a %.2lf K\n", valor, resultado);
        break;
    case 5:
        resultado = valor - 273.15;
        printf("%.2lf K equivalem a %.2lf °C\n", valor, resultado);
        break;
    case 6:
        resultado = (valor - 273.15) * 9 / 5 + 32;
        printf("%.2lf K equivalem a %.2lf °F\n", valor, resultado);
        break;
    default:
        printf("Opção inválida.\n");
    }
}

void conversorVelocidade()
{
    int escolha;
    double valor, resultado;

    printf("********************************************\n");
    printf("***   Conversor de Unidades de Velocidade   ***\n");
    printf("********************************************\n");
    printf("1 - Km/h para m/s\n");
    printf("2 - m/s para Km/h\n");
    printf("3 - Km/h para Milhas/h\n");
    printf("4 - Milhas/h para Km/h\n");
    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%lf", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor / 3.6;
        printf("%.2lf km/h equivalem a %.2lf m/s\n", valor, resultado);
        break;
    case 2:
        resultado = valor * 3.6;
        printf("%.2lf m/s equivalem a %.2lf km/h\n", valor, resultado);
        break;
    case 3:
        resultado = valor / 1.609;
        printf("%.2lf km/h equivalem a %.2lf milhas/h\n", valor, resultado);
        break;
    case 4:
        resultado = valor * 1.609;
        printf("%.2lf milhas/h equivalem a %.2lf km/h\n", valor, resultado);
        break;
    default:
        printf("Opção invalida.\n");
    }
}

void conversorEnergia()
{
    int escolha;
    double valor, resultado;

    printf("********************************************\n");
    printf("***    Conversor de Unidades de Energia    ***\n");
    printf("********************************************\n");
    printf("1 - Joules para Calorias\n");
    printf("2 - Calorias para Joules\n");
    printf("3 - Joules para Quilowatt-hora\n");
    printf("4 - Quilowatt-hora para Joules\n");
    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada inválida. Por favor, digite um número.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%lf", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor / 4.184;
        printf("%.2lf joules equivalem a %.2lf calorias\n", valor, resultado);
        break;
    case 2:
        resultado = valor * 4.184;
        printf("%.2lf calorias equivalem a %.2lf joules\n", valor, resultado);
        break;
    case 3:
        resultado = valor / 3600000;
        printf("%.2lf joules equivalem a %.6lf kWh\n", valor, resultado);
        break;
    case 4:
        resultado = valor * 3600000;
        printf("%.2lf kWh equivalem a %.2lf joules\n", valor, resultado);
        break;
    default:
        printf("Opção invalida.\n");
    }
}

void conversorArea()
{
    int escolha;
    float valor, resultado;

    printf("********************************************\n");
    printf("***     Conversor de Unidades de Área     ***\n");
    printf("********************************************\n");
    printf("1 - Metros quadrados para Quilometros quadrados\n");
    printf("2 - Metros quadrados para Hectares\n");
    printf("3 - Hectares para Metros quadrados\n");
    printf("4 - Quilometros quadrados para Metros quadrados\n");
    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada invalida. Por favor, digite um número.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%f", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor / 1000000;
        printf("%.2f m² equivalem a %.6f km²\n", valor, resultado);
        break;
    case 2:
        resultado = valor / 10000;
        printf("%.2f m² equivalem a %.4f hectares\n", valor, resultado);
        break;
    case 3:
        resultado = valor * 10000;
        printf("%.2f hectares equivalem a %.2f m²\n", valor, resultado);
        break;
    case 4:
        resultado = valor * 1000000;
        printf("%.2f km² equivalem a %.2f m²\n", valor, resultado);
        break;
    default:
        printf("Opção invalida.\n");
    }
}

void conversorTempo()
{
    int escolha;
    float valor, resultado;

    printf("********************************************\n");
    printf("***     Conversor de Unidades de Tempo     ***\n");
    printf("********************************************\n");
    printf("1 - Horas para Minutos\n");
    printf("2 - Minutos para Segundos\n");
    printf("3 - Dias para Horas\n");
    printf("4 - Semanas para Dias\n");
    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada invalida. Por favor, digite um número.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%f", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um número.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor * 60;
        printf("%.2f horas equivalem a %.2f minutos\n", valor, resultado);
        break;
    case 2:
        resultado = valor * 60;
        printf("%.2f minutos equivalem a %.2f segundos\n", valor, resultado);
        break;
    case 3:
        resultado = valor * 24;
        printf("%.2f dias equivalem a %.2f horas\n", valor, resultado);
        break;
    case 4:
        resultado = valor * 7;
        printf("%.2f semanas equivalem a %.2f dias\n", valor, resultado);
        break;
    default:
        printf("Opção inválida.\n");
    }
}

void conversorArmazenamento()
{
    int escolha;
    float valor, resultado;

    printf("********************************************\n");
    printf("***  Conversor de Unidades de Armazenamento  ***\n");
    printf("********************************************\n");
    printf("1 - Megabytes para Gigabytes\n");
    printf("2 - Gigabytes para Terabytes\n");
    printf("3 - Kilobytes para Megabytes\n");
    printf("4 - Bytes para Kilobytes\n");
    printf("Escolha uma opção: ");

    if (scanf("%d", &escolha) != 1)
    {
        printf("Entrada inválida. Por favor, digite um número.\n");
        limparBuffer();
        return;
    }

    printf("Digite o valor: ");
    if (scanf("%f", &valor) != 1)
    {
        printf("Entrada invalida. Por favor, digite um numero.\n");
        limparBuffer();
        return;
    }

    switch (escolha)
    {
    case 1:
        resultado = valor / 1024;
        printf("%.2f MB equivalem a %.4f GB\n", valor, resultado);
        break;
    case 2:
        resultado = valor / 1024;
        printf("%.2f GB equivalem a %.4f TB\n", valor, resultado);
        break;
    case 3:
        resultado = valor / 1024;
        printf("%.2f KB equivalem a %.4f MB\n", valor, resultado);
        break;
    case 4:
        resultado = valor / 1024;
        printf("%.2f bytes equivalem a %.4f KB\n", valor, resultado);
        break;
    default:
        printf("Opção inválida.\n");
    }
}
