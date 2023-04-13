#include <stdio.h>

int main() {
    int i, n=10, t1=0, t2=1, nextTerm;

    printf("Los primeros %d términos de la serie de Fibonacci son:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
