#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d, e, f;
    while (scanf("%d", &a) != EOF) {
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        scanf("%d", &e);
        scanf("%d", &f);
        if (c*e - b*f == 0 && - c*d + a*f == 0) {
            printf("%.3f ", (float) 0);
            printf("%.3f\n", (float) 0); 
        } else if ( - c*d + a*f == 0) {
            printf("%.3f ", (float) (c*e - b*f) / (a*e - b*d ));
            printf("%.3f\n", (float) 0); 
        } else if (c*e -b*f == 0) {
            printf("%.3f ", (float) 0);
            printf("%.3f\n", (float) (- c*d + a*f) / (a*e - b*d ));
        } else {
            printf("%.3f ", (float) (c*e - b*f) / (a*e - b*d ));
            printf("%.3f\n", (float) (- c*d + a*f) / (a*e - b*d ));
        }
    }
    return 0;
}