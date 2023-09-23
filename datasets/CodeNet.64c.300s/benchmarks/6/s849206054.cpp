#include <stdio.h>

void draw_line(void);

int main(void)
{
    int n, b, f, r, v;
    int i, j;
    int room1[3][10], room2[3][10], room3[3][10], room4[3][10];
    
    /*room1~4[][] = number of people*/
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 10; ++j) {
            room1[i][j] = 0;
            room2[i][j] = 0;
            room3[i][j] = 0;
            room4[i][j] = 0;
        }
    }

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d %d %d %d", &b, &f, &r, &v);
        
        switch (b) {
            case 1:
                room1[f - 1][r - 1] += v;
                break;
            case 2:
                room2[f - 1][r - 1] += v;
                break;
            case 3:
                room3[f - 1][r - 1] += v;
                break;
            case 4:
                room4[f - 1][r - 1] += v;
                break;
        }
    }

    for (i = 0; i < 3; ++ i) {
        for (j = 0; j < 10; ++j) {
            if(j != 10 - 1 ) printf(" %d", room1[i][j]);
            else {
                printf(" %d\n", room1[i][j]);
                if (i == 2 && j == 9) draw_line();
            }
        }
    }
    for (i = 0; i < 3; ++ i) {
        for (j = 0; j < 10; ++j) {
            if(j != 10 - 1 ) printf(" %d", room2[i][j]);
            else {
                printf(" %d\n", room2[i][j]);
                if (i == 2 && j == 9) draw_line();
            }
        }
    }
    for (i = 0; i < 3; ++ i) {
        for (j = 0; j < 10; ++j) {
            if(j != 10 - 1 ) printf(" %d", room3[i][j]);
            else {
                printf(" %d\n", room3[i][j]);
                if (i == 2 && j == 9) draw_line();
            }
        }
    }
    for (i = 0; i < 3; ++ i) {
        for (j = 0; j < 10; ++j) {
            if(j != 10 - 1 ) printf(" %d", room4[i][j]);
            else {
                printf(" %d\n", room4[i][j]);
            }
        }
    }

    return 0;
}

void draw_line(void)
{
    for (int i = 0; i < 20; ++i) {
        printf("#");
    }
    printf("\n");
}

    