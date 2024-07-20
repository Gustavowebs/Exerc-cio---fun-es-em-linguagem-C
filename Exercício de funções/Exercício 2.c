//Escreva	uma	função	que	calcule e	retorne a	distância	entre	dois	pontos	(	
//x1, y1)	e	 (x2, y2).	Todos	os números	e	 valores	de	 retorno	devem	ser	do	
//tipo	float.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float funcao(float xa, float xb, float ya, float yb){
    float result;

    result = sqrt((pow(xb - xa, 2) + pow(yb - ya, 2)));
    return result;
}
int main(){
    float Xa, Xb, Ya, Yb, V;

    printf("Informe X1, Y1:");
    scanf("%f, %f", &Xa, &Ya);
    printf("Informe X2, Y2:");
    scanf("%f, %f", &Xb, &Yb);

    V = funcao(Xa, Xb, Ya, Yb);

    printf("DISTANCIA DE 2 PONTOS: %.3f\n", V);
}