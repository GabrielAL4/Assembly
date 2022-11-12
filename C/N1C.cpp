#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){
    float alt, peso, imc;
        printf("Qual a sua altura?");
        scanf("%f", &alt);
        printf("Qual seu peso?");
        scanf("%f", &peso);

        imc=(peso)/(alt*alt);
    
        if (imc<16){
            printf("Magresa Grave");
        }
        if ((imc>=16) && (imc<17)){
            printf("Magresa Moderada");
        }
        if ((imc>=17) && (imc<18.5)){
            printf("Magresa leve");
        }
        if ((imc>=18.5) && (imc<25)){
            printf("Saudavel");
        }
        if ((imc>=30) && (imc<35)){
            printf("Obesidade I");
        }
        if ((imc>=35) && (imc<40)){
            printf("Obesidade II");
        }
        if (imc>=40){
            printf("Obesidade III");
        }

    return 0;
}