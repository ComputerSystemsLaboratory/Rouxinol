#include <stdio.h>
#include <stdbool.h>
void Judgetriangle(int a, int b, int c);
void judge(int a, int b, int c);
int a, b, c;
bool flag = false;
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        {
            flag = false;
            scanf("%d %d %d", &a, &b, &c);
            Judgetriangle(a, b, c);
        }
    return 0;
}

void Judgetriangle(int a, int b, int c)
{
    judge (a, b, c);
    judge (a, c, b);
    judge (b, c, a);
    if (flag == true) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

void judge(int a, int b, int c)
{
    if (a*a + b*b == c*c) {
        flag = true;
    }
}
    