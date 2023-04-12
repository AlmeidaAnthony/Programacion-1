#include <stdio.h>

#include <stdbool.h>

int main()
{
    int n;
    bool esPrimo = true;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo)
        printf("%d es primo.\n", n);
    else
        printf("%d no es primo.\n", n);

    return 0;
}