//Escreva	um	programa	que	leia	5	números	inteiros	positivos	(utilize	uma	
//função	 que	 leia	 esse	 número	 e	 verifique	 se	 ele	 é	 positivo).	 Para	 cada	
//número	informado	escrever	a	soma	de	seus	divisores	(exceto	ele	mesmo).	
//Utilize	a	função	SomaDivisores para		obter	a soma.	
//Nome:	SomaDivisores	
//Descrição:	Calcula	a	soma	dos	divisores	do	número	informado	(exceto	
//ele	mesmo).	
//Entrada:	Um	número	inteiro	e	positivo.	
//Saída:	A	soma	dos	divisores.	
//Exemplo:	Para	o	valor	8:	1+2+4	=	7

#include <stdio.h>
#include <stdlib.h>

int SomaDivisores(int n){
    int soma;

        for(int i=0; i < n; i++){
            if(n % i == 0){
                soma += i;
                printf("N: %i", i);
            }
}
    return soma;
}
int main(){
    int numb, result;

    for(int i=0; i<5; i++){
        printf("Informe um numero:");
        scanf("%d", &numb);
        result = SomaDivisores(numb);
        printf("Soma: %d", result);
    }
}