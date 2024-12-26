#include <stdio.h>

// Função para converter litro para outras unidades
void converterLitros(double litros) {
    double mililitros = litros * 1000;
    double metrosCubicos = litros / 1000;

    printf("%.2f Litros é igual a:\n", litros);
    printf("%.2f Mililitros\n", mililitros);
    printf("%.6f Metros cúbicos\n", metrosCubicos);
}

// Função para converter mililitro para outras unidades
void converterMililitros(double mililitros) {
    double litros = mililitros / 1000;
    double metrosCubicos = mililitros / 1000000;

    printf("%.2f Mililitros é igual a:\n", mililitros);
    printf("%.2f Litros\n", litros);
    printf("%.6f Metros cúbicos\n", metrosCubicos);
}

// Função para converter metros cúbicos para outras unidades
void converterMetrosCubicos(double metrosCubicos) {
    double litros = metrosCubicos * 1000;
    double mililitros = metrosCubicos * 1000000;

    printf("%.6f Metros cúbicos é igual a:\n", metrosCubicos);
    printf("%.2f Litros\n", litros);
    printf("%.2f Mililitros\n", mililitros);
}

int main() {
    int opcao;
    double valor;

    printf("Conversor de Unidades de Volume\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Litro\n");
    printf("2. Mililitro\n");
    printf("3. Metro cúbico\n");
    printf("Digite a opção (1-3): ");
    scanf("%d", &opcao);

    printf("Digite o valor para conversão: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            converterLitros(valor);
            break;
        case 2:
            converterMililitros(valor);
            break;
        case 3:
            converterMetrosCubicos(valor);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
