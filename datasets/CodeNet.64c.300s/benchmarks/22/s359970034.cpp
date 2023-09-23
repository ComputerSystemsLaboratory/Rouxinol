#include<stdio.h>

void right_triangle(int x, int y, int z);

int main(void)
{
        int n;
	scanf("%d", &n);
	int i = 0;
        int x, y, z;
	while (i < n) {
	scanf("%d %d %d", &x, &y, &z);
	right_triangle(x, y, z);
	i++;
	}
	return 0;
}

void right_triangle(int x, int y, int z)
{
    int i, j, k;
    i = x * x;
    j = y * y;
    k = z * z;
    if(i == j + k || j == k + i || k == i + j) {
    printf("YES\n");
    } else {
    printf("NO\n");
    }
}