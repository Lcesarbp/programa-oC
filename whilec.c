# include <stdio.h>

int main(){

int numero, soma = 0;

while(1){

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if( numero < 0){

    break;
}

    soma = numero + soma;


    
}

printf("Soma total %d \n", soma);

return 0;



}