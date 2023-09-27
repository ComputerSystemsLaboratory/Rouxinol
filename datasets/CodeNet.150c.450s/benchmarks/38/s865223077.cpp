#include<stdio.h>

void right_triangle(int x, int y, int z)
{
    int xx = x * x;
    int yy = y * y;
    int zz = z * z;
    if (xx == yy + zz) {
        printf("YES\n");
    } else if (yy == xx + zz) {
        printf("YES\n");
    } else if (zz == xx + yy) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}    

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int r[3];
        scanf("%d %d %d", &r[0], &r[1], &r[2]);
        right_triangle(r[0], r[1], r[2]);
    }
    return 0;
}    