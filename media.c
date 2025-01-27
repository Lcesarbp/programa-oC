# include <stdio.h>

int main (){

    int nota1, nota2, nota3;
   float media;

    printf("Entre com a nota 1 do aluno \n");
    scanf("%d", &nota1);
    printf("A nota inserida foi: %d \n", nota1);

    printf("Entre com a nota 2 do aluno \n");
    scanf("%d", &nota2);
    printf("A nota inserida foi: %d \n", nota2);

    printf("Entre com a nota 3 do aluno \n");
    scanf("%d", &nota3);
    printf("A nota inserida foi: %d \n", nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.2f", media);








    return 0;













}