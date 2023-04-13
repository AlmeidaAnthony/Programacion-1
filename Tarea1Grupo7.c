#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n=10, a=0, b=1,c;

    printf("Los primeros %d términos de la serie de Fibonacci son:\n",n);

 for (int i = 1; i <=n; i++)
 {
     printf("%d\n",a);
     c=a+b;
     a=b;
     b=c;
 }
    return 0;
}