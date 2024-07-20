//Faça	uma	função	que	recebe	um	valor	inteiro	 e	verifica	se	o	valor	é	par.	A	
//função	deve	retornar	1	se	o	número	for	par	e	0	se	for	ímpar

int par_impar(int n){

    if((n % 2) == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int numb, result;

    printf("Digite um numero:");
    scanf("%d", &numb);

    result = par_impar(numb);

    if(result == 1){
        printf("Numero par!\n", result);
    }else if(result == 0){
        printf("Numero impar!\n", result);
    }
}
