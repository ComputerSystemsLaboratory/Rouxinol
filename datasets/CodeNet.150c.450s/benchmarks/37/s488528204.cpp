#include <stdio.h>
#include <math.h>
 
int main(void) {
double a, b, c, d, e, f, x, y;
while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) > 0) {
x = (c * e - b * f) / (a * e - b * d);
y = (a * f - c * d) / (a * e - b * d);
if (x == -0.0) x = 0.0;
if (y == -0.0) y = 0.0;
printf("%01.3lf %01.3lf\n", x, y);
}
 
 
 
return 0;
}