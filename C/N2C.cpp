#include<stdio.h>
#include<stdlib.h>


int main(){
    float salario, valorApg;

    printf("Insira seu salario: \n");
    scanf("%f", &salario);

    if(salario<=1100){
        valorApg=salario*0.075;
        printf("O valor que deve ser pago ao INSS e de: %.1f", valorApg);
    }
    if(salario>1100 && salario<=2203.48){
        valorApg=salario*0.09;
        printf("O valor que deve ser pago ao INSS e de: %.1f", valorApg);
    }
    if(salario>2203.48 && salario<=3305.22){
        valorApg=salario*0.12;
        printf("O valor que deve ser pago ao INSS e de: %.1f", valorApg);
    }
    if(salario>3305.22 && salario<=6433.57){
        valorApg=salario*0.14;
        printf("O valor que deve ser pago ao INSS e de: %.1f", valorApg);
    }
    if(salario>6433.57){
        valorApg=salario*0.14;
        printf("O valor que deve ser pago ao INSS e de: %.1f", valorApg);
    }
}