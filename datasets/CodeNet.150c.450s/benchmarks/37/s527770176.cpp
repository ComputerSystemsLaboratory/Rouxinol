#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    double a, b, c, d, e, f;
    cout << fixed << setprecision(3);
    while(cin >> a >> b >> c >> d >> e >> f){
        if(a != 0){
            if(a != 1){
                b = b / a;
                c = c / a;
                a = a / a;
            }
            e = e - b * d / a;
            f = f - c * d / a;
            d = d - d / a;
            if(e != 1){
                f = f / e;
                e = e / e;
            }
            c = c - f * b / e;
            b = b - b / e;
        }
        cout << c << " " << f << endl;
    }
    
    return 0;
}

