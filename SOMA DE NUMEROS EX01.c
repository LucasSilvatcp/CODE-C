#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL,"Portuguese");
 int soma;
    printf("Soma de numeros fixos:25, 15, 39, 64 e 85.");
    soma = 25 + 15 + 39 + 64 + 85;
    printf("\n\nA soma dos numeros é:%d",soma);
    return 0;
}
