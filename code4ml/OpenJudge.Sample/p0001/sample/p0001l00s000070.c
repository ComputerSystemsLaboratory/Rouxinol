#include<stdio.h>

int
main(int argc, char *argv[])
{
        int a, b;
        char buf[30];

        while (fgets(buf, 30, stdin)) {
                sscanf(buf, "%d %d", &a, &b);
                a += b;
                b = 0;
                do {
                        a /= 10;
                        b++;
                } while (a >= 1);
                printf("%d\n", b);
        }
        return 0;
}