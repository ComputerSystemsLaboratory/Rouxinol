#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{   
    int x;
    int i;
    int a, b, c, d;
    while (scanf("%d", &x) != EOF) {
        i = 0;
        a = 9;
        b = 9;
        c = 9;
        d = 9;
        for (a = 9; a >= 0;a--) {
            for (b = 9;b >= 0; b--) {
                for (c = 9;c >= 0; c--) {
                    for (d = 9;d >= 0 ;d--) {
                        if ((a + b + c + d) == x) {
                            i += 1;
                        }
                    }
                }
            }
        }
        printf("%d\n", i);
    }
    return 0;
}