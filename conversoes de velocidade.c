#include <stdio.h>
#include <unistd.h>


//Conversão de velocidade. Conversões entre Km/h, m/s e mph.



double kmh, ms, mph;
char escolha;

int main ()
{

while(1){

printf("Escolha o valor que deseja converter: \na) - km/h \nb) - m/s\nc) - mph\nEscolha: ");
scanf(" %c", &escolha); 
    
    system("chcp 65001>null"); //Configuração de UTF-8 para o windows. (Aceitar os acentos e etc.)

    //conversões de Km/h.

    if(escolha == 'a' || escolha =='A') {
        printf("Você escolheu Km/h.\npara qual valor deseja convertê-lo? \na) - m/s \nb) - mph\nEscolha:");
        scanf(" %c", &escolha);
    while(1){
            if(escolha == 'a' || escolha =='A') { //Km/h para m/s.
                printf("Você escolheu m/s.\nDigite o valor em Km/h: ");
                scanf("%lf", &kmh);
                ms = kmh / 3.6;
                printf("O valor convertido de Km/h para m/s é: %lf", ms);
                sleep (1); 
                break; 
            }
        
            else if(escolha == 'b' || escolha == 'B') { //km/h para mph.
                printf("Você escolheu mph.\nDigite o valor em Km/h: ");
                scanf("%lf", &kmh);
                mph = kmh * 0.62137119;
                printf("O valor convertido de Km/h para mph é: %lf", mph);
                sleep (1); 
                break; 
            }
            
            else {
                printf("Opção inválida, tente novamente.\n");
                scanf(" %c", &escolha);
            }
    }}
    
    // Conversões de m/s.

    else if (escolha == 'b' || escolha == 'B') {
        printf("Você escolheu m/s.\npara qual valor deseja convertê-lo? \na) - Kmh/h \nb) - mph\nEscolha: ");
        scanf(" %c", &escolha);
    while(1){         
             if (escolha == 'a' || escolha =='A'){ //m/s para km/h.
             printf("Você escolheu Km/h.\nDigite o valor em m/s: ");
             scanf("%lf", &ms);
             kmh = ms * 3.6; 
             printf("O convertido de de m/s para Km/h é: %lf", kmh);
             sleep (1);
             break;
             }

             else if (escolha == 'b' || escolha == 'B'){ //m/s para mph.
             printf("Você escolheu mph.\nDigite o valor em m/s: ");
             scanf("%lf", &ms);
             mph = ms * 2.23693629; 
             printf("O convertido de m/s para mph é: %lf", mph);
             sleep(1);
             break;
             }
        

             else {
                printf("Opção inválida. Tente novamente.\n"); 
                scanf(" %c", &escolha);  
             } 
    }}

    //Conversões de mph.

    else if (escolha == 'c' || escolha == 'C') { //mph para Km/h.
        printf("Você escolheu mph.\npara qual valor deseja convertê-lo? \na) - Km/h \nb) - m/s\nEscolha:");
        scanf(" %c", &escolha);
    while(1){        
            if(escolha == 'a' || escolha =='A'){
                printf("Você escolheu Km/h.\nDigite o valor em mph: ");
                scanf("%lf", &mph);
                kmh = mph * 1.609344;
                printf("O valor convertido de mph para Km/h é: %lf", kmh);
                sleep(1);
                break;
                }
            
            else if(escolha == 'b' || escolha == 'B'){ //mph para m/s.
                printf("Você escolheu m/s.\nDigite o valor em mph: ");
                scanf("%lf", &mph);
                ms = mph * 0.44704;
                printf("O valor convertido de mph para m/s é: %lf", ms);
                sleep(1);
                break;
                }

                else{
                    printf("Opção inválida. Tente novamente.\n");
                    scanf(" %c", &escolha);
                } 
    }}
            
    else { printf("Resposta inválida, tente novamente.\n");    
           continue;
    }
    
    //conclusão e retorno ao início se desejar fazer mais conversões.

    printf("\nDeseja fazer uma outra conversão? s/n\n");
    scanf(" %c", &escolha);
        if (escolha == 's' || escolha == 'S'){
        }
        else if(escolha == 'n' || escolha == 'N'){
        printf ("Até a próxima!");
        sleep(3);
        break;
    } 

}
    return 0;
}