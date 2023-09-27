#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF) {
        float det = a*e - b*d;
        float x = (c*e-b*f)/det;
        float y = (-c*d+a*f)/det;
        x = x==-0.0f?0.0f:x;
        y = y==-0.0f?0.0f:y;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}