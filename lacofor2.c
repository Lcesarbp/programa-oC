# include <stdio.h>

int main(){

    int numero = 0;
    int resultado = 0;

    printf("Digita um número: \n");
    scanf("%d", &numero);
    
    for(int i = 1; i<=10; i++){

        resultado = numero * i;

        printf("%d x %d = %d \n", numero, i, resultado );


    }


return 0;



}