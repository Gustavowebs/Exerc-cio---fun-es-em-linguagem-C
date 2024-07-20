//Escreva	 uma	 função	 potencia(base,	 expoente) que,	 quando	 chamada,	
//retorna	baseexpoente.	Por	exemplo,	potencia(3,	4)	deve	retornar	81.	Assuma	
//que	expoente	é um	inteiro	maior ou	igual	a	1.	

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potencia(float base, int exp){
    float base_expoente;

    if(exp >= 1){
        base_expoente = pow(base, exp);
    }else{
        printf("\nA exponenciacao negativa!");
    }
    return base_expoente;
}
int main(){
    float B, Exp, result;

    printf("Informe o valor da base:");
    scanf("%f", &B);
    printf("Informe o valor do expoente:");
    scanf("%f", &Exp);

    result = potencia(B, Exp);

    if(Exp >=1){
        printf("Valor da potencia: %.3f\n", result);
    }

    return 0;
}