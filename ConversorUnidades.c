/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de ProgramaÃ§Ã£o
 * Tarefa: depuraÃ§Ã£o e versionamento
 * Residentes: 
 *  - Lucas Meira de Souza Leite
 *  - CauÃ£ Gomes Fraga
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
#include <stdlib.h> //NecessÃ¡rio para o system("cls")
#include <locale.h> //NecessÃ¡rio para o setlocale

void converter_area();

void converte_m_para_cm(float comprimento);
void converte_m_para_km(float comprimento);
void converte_cm_para_m(float comprimento);
void converte_km_para_m(float comprimento);

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //NecessÃ¡rio para exibiÃ§Ã£o de palavras com acento
    int escolha = 0;
    float comprimento = 0;
    char continuar = 'N';
    do  
    {
        system("cls"); //Limpa a tela a cada iteraÃ§Ã£o       
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
        printf("Escolha uma opÃ§Ã£o:      ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:

                //chamada da funÃ§Ã£o
                system("cls");
                printf("Escolha a conversão desejada:\n"); 
                printf("1. Km para M\n"); 
                printf("2. M para Km\n"); 
                printf("3. Cm para M\n"); 
                printf("4. M para Cm\n"); 
                printf("Digite a sua escolha:   "); 
                scanf("%d", &escolha); 

                switch (escolha) {
                case 1:
                    printf("Digite o valor a ser convertido:    "); 
                    scanf("%f", &comprimento);
                    converte_km_para_m(comprimento);
                    break;
                case 2:
                    printf("Digite o valor a ser convertido:    "); 
                    scanf("%f", &comprimento);
                    converte_m_para_km(comprimento);
                    break;
                case 3:
                    printf("Digite o valor a ser convertido:    "); 
                    scanf("%f", &comprimento);
                    converte_cm_para_m(comprimento);
                    break;
                case 4:
                    printf("Digite o valor a ser convertido:    "); 
                    scanf("%f", &comprimento);
                    converte_m_para_cm(comprimento);
                    break;                
                default:
                    printf("Opção inválida.\n");
                    break;
                }

                break;
            case 2:
                //chamada da funÃ§Ã£o
                break;
            case 3:
                //chamada da funÃ§Ã£o
                break;
            case 4:
                //chamada da funÃ§Ã£o
                break;
            case 5:
                //chamada da funÃ§Ã£o
                break;
            case 6:
                //chamada da funÃ§Ã£o
                break;
            case 7:
                converter_area();
                break;
            case 8:
                //chamada da funÃ§Ã£o
                break;
            case 9:
                //chamada da funÃ§Ã£o
                break;
            default:
                printf("OpÃ§Ã£o invÃ¡lida.\n");
        }
        printf("\nDeseja escolher outra opÃ§Ã£o? (S/N)");
        scanf(" %c", &continuar); //O espaÃ§o antes de %c Ã© necessÃ¡rio para ignorar espaÃ§os em branco e realmente ler a variÃ¡vel
    } while ((continuar == 'S') || (continuar == 's'));

    return 0;
    system("PAUSE");
}





void converter_area() {
        int opcao = 0;
    float valor, resultado;

    printf("Escolha a conversÃ£o desejada:\n");
    printf("1 - Metros quadrados para quilÃ´metros quadrados\n");
    printf("2 - Metros quadrados para hectares\n");
    printf("3 - Metros quadrados para acres\n");
    printf("4 - QuilÃ´metros quadrados para metros quadrados\n");
    printf("5 - Hectares para metros quadrados\n");
    printf("6 - Acres para metros quadrados\n");
    printf("Escolha uma opÃ§Ã£o: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch(opcao) {
        case 1:
        resultado = valor / 1000000;
        printf("%.2f metros quadrados equivalem a %.6f quilÃ´metros quadrados.", valor, resultado);
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
        printf("%.2f quilÃ´metros quadrados equivalem a %.2f metros quadrados.", valor, resultado);
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
        printf("OpÃ§Ã£o invÃ¡lida.");
    }    

// Implementação das funções relativas a comprimento.
void converte_m_para_cm(float comprimento){
    printf("%.3f M = %.3f Cm\n", comprimento, comprimento * 100);
}
void converte_m_para_km(float comprimento){
    printf("%.3f M = %.3f Km\n", comprimento, comprimento / 1000);    
}
void converte_cm_para_m(float comprimento){
    printf("%.3f Cm = %.3f M\n", comprimento, comprimento / 100);
}
void converte_km_para_m(float comprimento){
    printf("%.3f Km = %.3f M\n", comprimento, comprimento * 1000);

}
