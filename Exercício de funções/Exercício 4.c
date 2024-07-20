//Escreva	 um	 programa	 em	 C	 que	 leia	 5	 valores	 inteiros	 e	 imprima	 para	
//cada	um	o	seu	correspondente	valor	absoluto.	Para	obter	o	valor	absoluto	
//do	número	utilize	a	função	Absoluto especificada	abaixo	2:		
//Nome:	Absoluto
//Descrição:	Retorna	o	valor	absoluto	do	número	fornecido.	
//Entrada:	int	n	
//Saída:	(int)	O	respectivo	valor	absoluto	de	n.	

#include <stdio.h>
#include <stdlib.h>

int valor_absoluto(int n){
    int result;
    
    for(int i=0; i<3; i++){
    if(n < 0){
        result = n * (-1);
        return result;
    }
    }
}
int main(){
    int result, numb;

    for(int i=0; i<3; i++){
        printf("informe um numero:");
        scanf("%d", &numb);
        
        printf("Valor absoluto: %d\n", result = valor_absoluto (numb));
    }
}