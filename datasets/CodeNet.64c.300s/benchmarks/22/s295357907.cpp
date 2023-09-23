#include <stdio.h>

void triangle_judge(int a, int b, int c);

int main(void)
{
    int data_set;
    int a[1000], b[1000], c[1000];
    scanf("%d", &data_set);
    for (int i = 0; i < data_set; ++i) {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }
    for (int i = 0; i < data_set; ++i) {
        triangle_judge(a[i], b[i], c[i]);
    }
    return 0;
}

void triangle_judge(int a, int b, int c)
{
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}