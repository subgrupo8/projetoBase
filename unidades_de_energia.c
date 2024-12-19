#include <stdio.h>

double converterEnergia(double valor, char de[], char para[]) {
    // Conversões:
    // 1 kW = 1000 W
    // 1 cv ≈ 735.499 W
    // 1 kW ≈ 1.35962 cv

    if (strcmp(de, "W") == 0 && strcmp(para, "kW") == 0) {
        return valor / 1000.0;
    } else if (strcmp(de, "W") == 0 && strcmp(para, "cv") == 0) {
        return valor / 735.499;
    } else if (strcmp(de, "kW") == 0 && strcmp(para, "W") == 0) {
        return valor * 1000.0;
    } else if (strcmp(de, "kW") == 0 && strcmp(para, "cv") == 0) {
        return valor * 1.35962;
    } else if (strcmp(de, "cv") == 0 && strcmp(para, "W") == 0) {
        return valor * 735.499;
    } else if (strcmp(de, "cv") == 0 && strcmp(para, "kW") == 0) {
        return valor / 1.35962;
    } else {
        printf("Conversão não suportada.\n");
        return -1.0; // Indica erro
    }
}

int main() {
    double valor;
    char unidade_De[10], unidade_Para[10];

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (W, kW, cv): ");
    scanf("%s", unidade_De);

    printf("Digite a unidade de destino (W, kW, cv): ");
    scanf("%s", unidade_Para);

    double resultado = converterEnergia(valor, unidade_De, unidade_Para);

    if (resultado != -1.0) {
        printf("%.2lf %s equivalem a %.2lf %s\n", valor, unidade_De, resultado, unidade_Para);
    } else {
        printf("Conversão inválida. Tente novamente com unidades suportadas.\n");
    }

    return 0;
}