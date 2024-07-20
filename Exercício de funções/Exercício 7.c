//Faça	 uma	 função	 que	 recebe	 um	 valor	 inteiro	 e	 verifica	 se	 o	 valor	 é	
//positivo,	 negativo	 ou	 zero.	 A	 função	 deve	 retornar	 1	 para	 valores	
//positivos,	-1	para	negativos	e	0	para	o	valor	0.	

int verificacao(int n){

    if(n > 0){
        return 1;
    }else if(n < 0){
        return -1;
    }else if(n == 0){
        return 0;
    }
}
int main(){
    int numb, result;

    printf("Informe um numero:");
    scanf("%d", &numb);

    result = verificacao(numb);

    if(result == 1){
        printf("NUMERO POSITIVO!");
    }else if(result == -1){
        printf("NUMERO NEGATIVO!");
    }else if(result == 0){
        printf("NUMERO IGUAL A ZERO!");
    }
}