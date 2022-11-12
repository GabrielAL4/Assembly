#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
    int nQuarto;

    printf("Qual o numero do quarto?");
    scanf("%d", &nQuarto);

    if(nQuarto%2==0){
        printf("O quarto fica a direita");
    }
    else{
        printf("O quarto fica a esquerda");
    }


    return 0;
}