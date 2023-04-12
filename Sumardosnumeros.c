#include <stdio.h>
int main(int argc, char const *argv[]) 
{
    int num1, num2, suma;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("La suma es: %d", suma);
    return 0;
}
