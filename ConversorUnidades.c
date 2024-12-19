/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de Programação
 * Tarefa: depuração e versionamento
 * Residentes: 
 *  - Lucas Meira de Souza Leite
 *  - Allef Silva Imbassahy
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

double converterEnergia(double valor, char unidadeDe[], char unidadePara[]);
void conversorEnergia();

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Necessário para exibição de palavras com acento
    int escolha = 0;
    char continuar = 'N';
    do {
        system("cls"); //Limpa a tela a cada iteração       
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

        switch (escolha) {
            case 1:
                // chamada da função de comprimento
                break;
            case 2:
                // chamada da função de massa
                break;
            case 3:
                // chamada da função de volume
                break;
            case 4:
                // chamada da função de temperatura
                break;
            case 5:
                // chamada da função de velocidade
                break;
            case 6:
                conversorEnergia();
                break;
            case 7:
                // chamada da função de área
                break;
            case 8:
                // chamada da função de tempo
                break;
            case 9:
                // chamada da função de armazenamento
                break;
            default:
                printf("Opção inválida.\n");
        }
        printf("\nDeseja escolher outra opção? (S/N): ");
        scanf(" %c", &continuar); //O espaço antes de %c é necessário para ignorar espaços em branco e realmente ler a variável
    } while ((continuar == 'S') || (continuar == 's'));

    return 0;
}

double converterEnergia(double valor, char unidadeDe[], char unidadePara[]) {
    if (strcmp(unidadeDe, "W") == 0 && strcmp(unidadePara, "kW") == 0) { // W -> kW
        return valor / 1000.0;
    } else if (strcmp(unidadeDe, "W") == 0 && strcmp(unidadePara, "cv") == 0) { // W -> cv
        return valor / 735.499;
    } else if (strcmp(unidadeDe, "kW") == 0 && strcmp(unidadePara, "W") == 0) { // kW -> W
        return valor * 1000.0;
    } else if (strcmp(unidadeDe, "kW") == 0 && strcmp(unidadePara, "cv") == 0) { // kW -> cv
        return valor * 1.35962;
    } else if (strcmp(unidadeDe, "cv") == 0 && strcmp(unidadePara, "W") == 0) { // cv -> W
        return valor * 735.499;
    } else if (strcmp(unidadeDe, "cv") == 0 && strcmp(unidadePara, "kW") == 0) { // cv -> kW
        return valor / 1.35962;
    } else {
        printf("Conversão não suportada.\n");
        return -1.0; // Indica erro
    }
}

void conversorEnergia() {
    double valor;
    char unidadeDe[10], unidadePara[10];

    printf("\n********************************************\n");
    printf("***         Conversor de Energia         ***\n");
    printf("********************************************\n");
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (W, kW, cv): ");
    scanf("%s", unidadeDe);

    printf("Digite a unidade de destino (W, kW, cv): ");
    scanf("%s", unidadePara);

    double resultado = converterEnergia(valor, unidadeDe, unidadePara);

    if (resultado != -1.0) {
        printf("\n%.2lf %s equivalem a %.2lf %s\n", valor, unidadeDe, resultado, unidadePara);
    } else {
        printf("\nConversão inválida. Tente novamente com unidades suportadas.\n");
    }
}