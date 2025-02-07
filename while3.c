#include <stdio.h>



int main(){

int num = 0;
int i = 0;
int resultado = 0;
int media = 0;

printf("Digite um número: ");
    scanf("%d \n", &num);

while (1)
{
    

    if(num != -1){

        resultado = +num;
        i++;

    } 

    

}


    media = resultado/i;
    printf("Média %d", media);



   

return 0;



}