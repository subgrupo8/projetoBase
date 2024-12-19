/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de Programação
 * Tarefa: depuração e versionamento
 * Residentes: 
 *  - Lucas Meira de Souza Leite
 *  - Cauã Gomes Fraga
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

void converter_area();

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Necessário para exibição de palavras com acento
    int escolha = 0;
    char continuar = 'N';
    do  
    {
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
                //chamada da função
                break;
            case 2:
                //chamada da função
                break;
            case 3:
                //chamada da função
                break;
            case 4:
                //chamada da função
                break;
            case 5:
                //chamada da função
                break;
            case 6:
                //chamada da função
                break;
            case 7:
                converter_area();
                break;
            case 8:
                //chamada da função
                break;
            case 9:
                //chamada da função
                break;
            default:
                printf("Opção inválida.\n");
        }
        printf("\nDeseja escolher outra opção? (S/N)");
        scanf(" %c", &continuar); //O espaço antes de %c é necessário para ignorar espaços em branco e realmente ler a variável
    } while ((continuar == 'S') || (continuar == 's'));

    return 0;
    system("PAUSE");
}




void converter_area() {
        int opcao = 0;
    float valor, resultado;

    printf("Escolha a conversão desejada:\n");
    printf("1 - Metros quadrados para quilômetros quadrados\n");
    printf("2 - Metros quadrados para hectares\n");
    printf("3 - Metros quadrados para acres\n");
    printf("4 - Quilômetros quadrados para metros quadrados\n");
    printf("5 - Hectares para metros quadrados\n");
    printf("6 - Acres para metros quadrados\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch(opcao) {
        case 1:
        resultado = valor / 1000000;
        printf("%.2f metros quadrados equivalem a %.6f quilômetros quadrados.", valor, resultado);
        break;

        case 2:
        resultado = valor / 10000;
        printf("%.4f metros quadrados equivalem a %.4f hectares.", valor, resultado);
        break;

        case 3:
        resultado = valor / 4047;
        printf("%.4f metros quadrados equivalem a %.4f acres.", valor, resultado);
        break;

        case 4:
        resultado = valor * 1000000;
        printf("%.2f quilômetros quadrados equivalem a %.2f metros quadrados.", valor, resultado);
        break;

        case 5:
        resultado = valor * 10000;
        printf("%.2f hectares equivalem a %.2f metros quadrados.", valor, resultado);
        break;

        case 6:
        resultado = valor * 4047;
        printf("%.2f acres equivalem a %.2f metros quadrados.", valor, resultado);
        break;

        default:
        printf("Opção inválida.");
    }    
}
