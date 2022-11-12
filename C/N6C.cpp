#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
    float salF=1200, comis, salT, comisM;

    printf("Qual foi o valor de venda no mes em questao? ");
    scanf("%f", &comis);

    if(comis<=1500){
        salT= salF+(comis*0.1);
    }
    if(comis>1500){
        comisM=(comis-1500)*0.2;
        salT= salF+150+comisM;
    }

    printf("O salário final foi de: %.1f", salT);


    return 0;
}
