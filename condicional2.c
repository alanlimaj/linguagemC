#include <stdio.h> 
#include <stdlib.h>

int main() {


    float nota1, nota2, media;
    

    

    printf("Digite a primeira nota:");
    scanf("%f", & nota1);
    printf("Digite a segunda nota:");
    scanf("%f", & nota2);

    media = (nota1+nota2)/2;


    if (media >= 7) {
        printf("Aprovado");
    } else if(media>=5){

        printf("Recuperacao");
    }
        else{
            printf("Reprovado");
        }
    


    
    


    return 0;
}
