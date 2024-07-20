//Escreva	 uma função	 que	 receba	 dois	 números	inteiros	 retorne	 o	menor número1

#include <stdio.h>
#include <stdlib.h>

int maior_menor(int n1, int n2){
    int R;

    if(n1 < n2){
        R = 1;
    }else if (n1 > n2){
        R = 0;
    }
    return R;
}
int main(){

    int numb1, numb2, V;
    printf("Informe o primeiro numero:");
    scanf("%d", &numb1);
    printf("Informe o segundo numero:");
    scanf("%d", &numb2);

    V = maior_menor(numb1, numb2);

    if(V == 1){
        printf("MENOR: %d\n", numb1);
    }else if (V == 0){
        printf("MENOR: %d\n", numb2);
    }
}