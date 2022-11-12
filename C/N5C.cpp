#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
    float base1, alt1, base2, alt2, basef, altf, basel, altl, area1, area2, areaf, areal, areaTot, qtdl;

    printf("Informe respectivamente a base e altura dos lados 1: ");
    scanf("%f", &base1);
    scanf("%f", &alt1);

    printf("Informe respectivamente a base e altura dos lados 2: ");
    scanf("%f", &base2);
    scanf("%f", &alt2);

    printf("Informe respectivamente a base e altura do fundo da piscina: ");
    scanf("%f", &basef);
    scanf("%f", &altf);

    printf("Em Cm Informe respectivamente a base e altura dos ladrilhos a serem utilizados: ");
    scanf("%f", &basel);
    scanf("%f", &altl);

    area1=(base1*alt1)*2;
    area2=(base2*alt2)*2;
    areaf=basef*altf;
    areal=(basel*altl)/100;
    areaTot=area1+area2+areaf;
    qtdl=areaTot/areal;

    printf("A quantidade de ladrilhos a serem utilizados em m2 e de: %.2f", qtdl);
    

    return 0;
}