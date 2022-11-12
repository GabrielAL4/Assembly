#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
    float salarioBruto, iprf, ip;

    printf("Insira o Salario bruto: ");
    scanf("%f", &salarioBruto);

    if (salarioBruto<=1903.98)
    {
        printf("Isento de imposto\n");
        printf("Esta na Faixa 1");
    }
    if(salarioBruto>1903.98){
        ip=salarioBruto-1903.98;
        if(salarioBruto>1903.98 && salarioBruto<=2826.65){
            iprf=ip*0.075;
            printf("O imposto foi de: %.2f\n", iprf);
            printf("Faixa 2: %.2f\n", iprf);
            printf("O salario com os descontos foi de %.1f\n", salarioBruto-iprf);
            printf("A aliquota efetiva foi de: %.2f%%", (iprf/salarioBruto)*100);
        }
        if(salarioBruto>2826.65 && salarioBruto<=3751.05){
            iprf=(922.67*0.075)+((ip-924.40)*0.15);
            printf("O imposto foi de: %.2f\n", iprf);
            printf("Faixa 2: %.2f\n", (922.67*0.075));
            printf("Faixa 3: %.2f\n", ((ip-924.40)*0.15));
            printf("O salario com os descontos foi de %.1f\n", salarioBruto-iprf);
            printf("A aliquota efetiva foi de: %.2f%%", (iprf/salarioBruto)*100);
        }
        if(salarioBruto>3751.05 && salarioBruto<=4664.68){
            iprf=(922.67*0.075)+((924.40)*0.15)+((ip-913.63)*0.225);
            printf("O imposto foi de: %.2f\n", iprf);
            printf("Faixa 2: %.2f\n", (922.67*0.075));
            printf("Faixa 3: %.2f\n", ((924.40)*0.15));
            printf("Faixa 4: %.2f\n", ((ip-913.63)*0.225));
            printf("O salario com os descontos foi de %.1f\n", salarioBruto-iprf);
            printf("A aliquota efetiva foi de: %.2f%%", (iprf/salarioBruto)*100);
        }
        if(salarioBruto>4664.68){
            iprf=(922.67*0.075)+((924.40)*0.15)+((913.63)*0.225)+((ip-2760.7)*0.275);
            printf("O imposto foi de: %.2f\n", iprf);
            printf("Faixa 2: %.2f\n", (922.67*0.075));
            printf("Faixa 3: %.2f\n", ((924.40)*0.15));
            printf("Faixa 4: %.2f\n", ((913.63)*0.225));
            printf("Faixa 5: %.2f\n", ((ip-2760.7)*0.275));
            printf("O salario com os descontos foi de %.1f\n", salarioBruto-iprf);
            printf("A aliquota efetiva foi de: %.2f%%", (iprf/salarioBruto)*100);
        }
    }
    return 0;
}