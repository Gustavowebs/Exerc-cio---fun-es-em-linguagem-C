//Escreva	 uma	 função	 que	 receba 3	 notas	 de	 um	 aluno	 e	 uma	 letra.	 Se	 a	
//letra	for	A	a	função	retorna a	média	aritmética	das	notas	do	aluno,	se	for	
//P,	 a	 sua	 média	 ponderada	 (pesos:	 5,	 3	 e	 2)

#include <stdio.h>
#include <stdlib.h>

float funcao(char letra, float numb1, float numb2, float numb3){
    float result_M, result_MP;

    if(letra == 'A' || letra == 'a'){
        result_M = (numb1 + numb2 + numb3) / 3;
        printf("Valor da media aritmetica: %.2f", result_M);
    }else if(letra == 'P' || letra == 'p'){
        result_MP = (numb1 * 5 + numb2 * 3 + numb3 * 2)/10;
        printf("Valor da media ponderada: %.2f", result_MP);
    }
}
int main(){
    char l;
    int n;
    float n1, n2, n3;

    printf("Informe uma letra:");
    scanf(" %c", &l);
    printf("Informe o valor do primeiro numero:");
    scanf("%f", &n1);
    printf("Informe o valor do segundo numero:");
    scanf("%f", &n2);
    printf("Informe o valor do terceiro numero:");
    scanf("%f", &n3);

    funcao(l, n1, n2, n3);
}