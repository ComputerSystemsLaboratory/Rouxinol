#include <stdio.h>

int main(void) {
    int a1, a2, a3, a4, b1, b2, b3, b4, S, T;

    scanf ("%d %d %d %d\n", &a1, &a2, &a3, &a4);    
    scanf ("%d %d %d %d\n", &b1, &b2, &b3, &b4);

    S = a1 + a2 + a3 + a4;
    T = b1 + b2 + b3 + b4;

    if (S > T) {
        printf ("%d\n", S);
    }
    else {
        printf ("%d\n", T);
    }

    return 0;
}