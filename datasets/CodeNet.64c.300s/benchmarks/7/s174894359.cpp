#include <stdio.h>

int main(void)
{
    int a[4][13];
    int i, j;

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 13; ++j) {
             a[i][j] = 0;
        }
    }

    int n;
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i) {
       int x;
       char c;
       scanf(" %c %d", &c, &x);
        switch(c) {
            case 'S':
                a[0][x - 1] = 1;
                break;
            case 'H':
                a[1][x - 1] = 1;
                break;
            case 'C':
                a[2][x - 1] = 1;
                break;
            case 'D':
                a[3][x - 1] = 1;
                break;
        }
    }
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 13; ++j) {
            if (a[i][j] == 0) {
                switch (i) {
                    case 0:
                        printf("S %d\n", j + 1);
                        break;
                    case 1:
                        printf("H %d\n", j + 1);
                        break;
                    case 2:
                        printf("C %d\n", j + 1);
                        break;
                    case 3:
                        printf("D %d\n", j + 1);
                        break;
                }
            }
        }
    }
    return 0;
}