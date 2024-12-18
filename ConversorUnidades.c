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
