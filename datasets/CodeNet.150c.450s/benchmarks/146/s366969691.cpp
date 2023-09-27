#include <cstdio>

int main(void)
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double m1, m2;
    
    int n;
    scanf("%d", &n);
    while (n != 0){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        m1 = (y2 - y1) / (x2 - x1);
        m2 = (y4 - y3) / (x4 - x3);
        (m1 == m2) ? printf("YES\n") : printf("NO\n");
        n--;
    }
    
    return (0);
}