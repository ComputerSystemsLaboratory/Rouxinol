#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c,d,e,f;
    while(cin >> a >> b >> c >> d >> e >> f){
        double Xa = c * e - b * f;
        double Xb = a * e - b * d;
        double Ya = c * d - a * f;
        double Yb = b * d - a * e;
        printf("%.3lf %.3lf\n", Xa / Xb + 1e-9, Ya / Yb + 1e-9);

    }
}
