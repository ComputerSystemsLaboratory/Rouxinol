#include<cstdio>
#include<cmath>
using namespace std;

int main() {
        int a, b, c, d, e, f;
        double x, y;
        char line[200];

        while(fgets(line, 200, stdin) != NULL) {
                sscanf(line, "%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
                x = ((double)(e*c - b*f)) / (a*e - d*b);
                y = ((double)(a*f - d*c)) / (a*e - d*b);
                if(abs(x) < 1.0e-4) x = 0;
                if(abs(y) < 1.0e-4) y = 0;
                printf("%.3f %.3f\n", x, y);
        }
}