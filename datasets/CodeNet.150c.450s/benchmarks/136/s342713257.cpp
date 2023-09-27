#include<stdio.h>
#include<math.h>

int main()
{   
    long int a, b, c;
    while (scanf("%ld", &a) != EOF) {
        scanf("%ld", &b);
        c = a * b;
        while (a != b) {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        printf("%ld ", a);
        printf("%ld\n", c / a);
    }
    return 0;
}