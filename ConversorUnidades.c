/******************************************************************************
 * Programa desenvolvido colaborativamente pelos residentes do Embarcatech
 * U3 - Linguagens e Ambientes de Programa��o
 * Tarefa: depura��o e versionamento
 * Residentes: 
 *  - Lucas Meira de Souza Leite
 *  -  jonatan Ramos dos Santos
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

void converterUnidadesDeTempo(void);
void converterUnidadeDeArmazenamento(void);

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
                converterUnidadesDeTempo();
                break;
            case 9:
                converterUnidadeDeArmazenamento();
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

void converterUnidadesDeTempo(void){
    int escolha;
    double valor;

    printf("Conversor de unidades de tempo\n");
    printf("Escolha uma unidade de entrada:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    scanf("%d", &escolha);
    double segundos, minutos, horas;

    
    if (escolha >= 1 && escolha <= 3) {
        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);
        
    } 
    switch (escolha) {
        case 1: // Converter de segundos para minutos/horas
            segundos = valor;
            minutos = valor / 60.0;
            horas = valor / 3600.0;
            printf("%.2f segundos equivalem a %.2f minutos ou %.2f horas.\n", segundos, minutos, horas);
            break;

        case 2: // Converter de minutos para segundos/ horas 
            minutos = valor;
            segundos = valor * 60.0;
            horas = valor / 60.0;
            printf("%.2f minutos equivalem a %.2f segundos ou %.2f horas.\n", minutos, segundos, horas);
            break;

        case 3: // Converter de horas pra segundos/ minuto
            horas = valor;
            segundos = valor * 3600.0;
            minutos = valor * 60.0;
            printf("%.2f horas equivalem a %.2f segundos ou %.2f minutos.\n", horas, segundos, minutos);
            break;

        default:
            printf("Opção inválida.\n");
    }
}

void converterUnidadeDeArmazenamento(void)
{
    int escolha;
    double valor;

    printf("Conversor de bits, bytes, kylobytes,Megabytes, gigabytes, Terabytes\n");
    printf("Escolha uma unidade de entrada:\n");
    printf("1 - bit\n");
    printf("2 - byte\n");
    printf("3 - Megabyte\n");
    printf("4 - gigabyte\n");
    printf("5 - terabyte\n");
    scanf("%d", &escolha);
    double bits, bytes, kylobytes, megabyte, gigabyte, terabyte;

    if (escolha >= 1 && escolha <= 5)
    {
        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);
    }
    switch (escolha)
    {
    case 1: // Converter de bits
        bits = valor;
        bytes = valor / 8;
        kylobytes = (valor / 8) / 1024;
        megabyte = ((valor / 8) / 1024) / 1024;
        gigabyte = (((valor / 8) / 1024) / 1024) / 1024;
        terabyte = ((((valor / 8) / 1024) / 1024) / 1024) / 1024;
        printf("%.2f bits valem a %.2f bytes valem a %.2f kylobytes valem a %.2f megabytes valem a %.2f gigabyte valem a %2.f terabytes  .\n", bits, bytes, kylobytes, megabyte, gigabyte, terabyte);
        break;

    case 2: // Converter bytes
        bits = valor * 8;
        bytes = valor;
        kylobytes = valor / 1024;
        megabyte = ((valor) / 1024) / 1024;
        gigabyte = (((valor) / 1024) / 1024) / 1024;
        terabyte = ((((valor) / 1024) / 1024) / 1024) / 1024;
        printf("%.2f bytes valem a %.2f bytes valem a %.2f kylobytes valem a %.2f megabytes valem a %.2f gigabyte valem a %2.f terabytes  .\n", bits, bytes, kylobytes, megabyte, gigabyte, terabyte);
        break;

    case 3: // Converter de kilobytes
        bits = valor * 1024 * 8;
        bytes = valor * 1024;
        kylobytes = valor;
        megabyte = valor / 1024;
        gigabyte = (valor / 1024) / 1024;
        terabyte = (((valor) / 1024) / 1024) / 1024;
        printf("%.2f bytes valem a %.2f bytes valem a %.2f kylobytes valem a %.2f megabytes valem a %.2f gigabyte valem a %2.f terabytes  .\n", bits, bytes, kylobytes, megabyte, gigabyte, terabyte);
        break;

    case 4: // Converter de megabytes
        bits = valor * 1024 * 1024 * 8;
        bytes = valor * 1024 * 1024;
        kylobytes = valor * 1024;
        megabyte = valor;
        gigabyte = (valor / 1024);
        terabyte = (((valor) / 1024) / 1024);
        printf("%.2f bytes valem a %.2f bytes valem a %.2f kylobytes valem a %.2f megabytes valem a %.2f gigabyte valem a %2.f terabytes  .\n", bits, bytes, kylobytes, megabyte, gigabyte, terabyte);
        break;

    case 5: // Converter de gigabytes
        bits = valor * 1024 * 1024 * 1024 * 8;
        bytes = valor * 1024 * 1024 * 1024;
        kylobytes = valor * 1024 * 1024;
        megabyte = valor * 1024;
        gigabyte = valor;
        terabyte = ((valor) / 1024);
        printf("%.2f bytes valem a %.2f bytes valem a %.2f kylobytes valem a %.2f megabytes valem a %.2f gigabyte valem a %2.f terabytes  .\n", bits, bytes, kylobytes, megabyte, gigabyte, terabyte);
        break;

    case 6: // Converter de terabytes
        bits = valor * 1024 * 1024 * 1024 * 1024 * 8;
        bytes = valor * 1024 * 1024 * 1024 * 1024;
        kylobytes = valor * 1024 * 1024 * 1024;
        megabyte = valor * 1024 * 1024;
        gigabyte = valor * 1024;
        terabyte = valor;
        printf("%.2f bytes valem a %.2f bytes valem a %.2f kylobytes valem a %.2f megabytes valem a %.2f gigabyte valem a %2.f terabytes  .\n", bits, bytes, kylobytes, megabyte, gigabyte, terabyte);
        break;
    default:
        printf("Opção inválida.\n");
    }
}
