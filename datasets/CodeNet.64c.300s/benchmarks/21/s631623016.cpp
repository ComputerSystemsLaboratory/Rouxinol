#include <iostream>
#include <iomanip>
#include <stdio.h>


using namespace std;


int main() {
    cout << fixed << setprecision(3);
     double a,b, c, d, e, f, x,y;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        y=(a*f-c*d)/(a*e-d*b);
        x=(c-b*y)/a;

        cout << x << " " << y << "\n";
    }

	return 0;
}