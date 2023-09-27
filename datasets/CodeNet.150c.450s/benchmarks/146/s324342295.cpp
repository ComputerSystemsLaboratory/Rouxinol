#include <stdio.h>
#define EPSIRON (1.0e-10)
#define ABS(X) ((X)<0.0 ? -(X):(X))

int main(void){
    int n;
    double x1, x2, x3, x4, dx1, dx2;
    double y1, y2, y3, y4, dy1, dy2;
    double cp; // cross product
    
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
        scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);
        dx1 = x2 - x1;
        dy1 = y2 - y1;
        dx2 = x4 - x3;
        dy2 = y4 - y3;
        cp = dx1 * dy2 - dy1 * dx2;
        printf("%s\n", ABS(cp) < EPSIRON ? "YES" : "NO");
    }
    
    return 0;
}