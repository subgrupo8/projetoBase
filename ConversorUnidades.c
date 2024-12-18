/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de Programa��o
 * Tarefa: depura��o e versionamento
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
#include <stdlib.h> //Necess�rio para o system("cls")
#include <locale.h> //Necess�rio para o setlocale

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Necess�rio para exibi��o de palavras com acento
    int escolha = 0;
    char continuar = 'N';
    do  
    {
        system("cls"); //Limpa a tela a cada itera��o       
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
        printf("Escolha uma op��o:      ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                //chamada da fun��o
                break;
            case 2:
                //chamada da fun��o
                break;
            case 3:
                //chamada da fun��o
                break;
            case 4:
                //chamada da fun��o
                break;
            case 5:
                //chamada da fun��o
                break;
            case 6:
                //chamada da fun��o
                break;
            case 7:
                //chamada da fun��o
                break;
            case 8:
                //chamada da fun��o
                break;
            case 9:
                //chamada da fun��o
                break;
            default:
                printf("Op��o inv�lida.\n");
        }
        printf("\nDeseja escolher outra op��o? (S/N)");
        scanf(" %c", &continuar); //O espa�o antes de %c � necess�rio para ignorar espa�os em branco e realmente ler a vari�vel
    } while ((continuar == 'S') || (continuar == 's'));

    return 0;
    system("PAUSE");
}
