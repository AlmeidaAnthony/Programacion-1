#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, sum;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    sum = (num * (num + 1)) / 2;

    printf("La suma de Gauss de %d es: \n",sum);

    return 0;
}
