#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, suma;
    printf( "ingrese el primer numero \n" ) ;
    scanf("%d", &a);
    printf("ingrese el segundo numero \n") ;
    scanf("%d", &b);
    printf("ingrese el tercer numero \n") ;
    scanf("%d", &c);
    suma= a + b + c;
    printf("La suma de los tres numeros son:\n %d", suma);

    return 0;
}
