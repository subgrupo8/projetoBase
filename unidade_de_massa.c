#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float massa;         // Valor da massa a ser convertido
    int unidade_origem;  // Unidade de origem (1: kg, 2: g, 3: t)
    int unidade_destino; // Unidade de destino (1: kg, 2: g, 3: t)
    float resultado;     // Resultado da conversão

    // Menu de opções
    printf("Conversor de Unidades de Massa\n");
    printf("Escolha as unidades:\n");
    printf("1 - Quilogramas (kg)\n");
    printf("2 - Gramas (g)\n");
    printf("3 - Toneladas (t)\n");

    // Entrada de dados
    printf("Digite o valor da massa: ");
    scanf("%f", &massa);

    printf("Digite a unidade de origem (1, 2 ou 3): ");
    scanf("%d", &unidade_origem);

    printf("Digite a unidade de destino (1, 2 ou 3): ");
    scanf("%d", &unidade_destino);

    // Conversão para a unidade de destino
    if (unidade_origem == 1) { // Quilogramas
        if (unidade_destino == 2) resultado = massa * 1000;        // Para gramas
        else if (unidade_destino == 3) resultado = massa / 1000;   // Para toneladas
        else resultado = massa;                                   // Para quilogramas
    } else if (unidade_origem == 2) { // Gramas
        if (unidade_destino == 1) resultado = massa / 1000;        // Para quilogramas
        else if (unidade_destino == 3) resultado = massa / 1e6;    // Para toneladas
        else resultado = massa;                                   // Para gramas
    } else if (unidade_origem == 3) { // Toneladas
        if (unidade_destino == 1) resultado = massa * 1000;        // Para quilogramas
        else if (unidade_destino == 2) resultado = massa * 1e6;    // Para gramas
        else resultado = massa;                                   // Para toneladas
    } else {
        printf("Unidade de origem invalida.\n");
        return 1;
    }

    // Exibe o resultado
    printf("Resultado da conversao: %.2f\n", resultado);

    return 0;
}
