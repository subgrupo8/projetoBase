/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de Programação
 * Tarefa: depuração e versionamento
 * Residentes: 
 *  - Lucas Meira de Souza Leite
 *  -  
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

void converte_m_para_cm(float comprimento);
void converte_m_para_km(float comprimento);
void converte_cm_para_m(float comprimento);
void converte_km_para_m(float comprimento);

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Necessário para exibição de palavras com acento
    int escolha = 0;
    float comprimento = 0;
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
                //chamada da função
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
