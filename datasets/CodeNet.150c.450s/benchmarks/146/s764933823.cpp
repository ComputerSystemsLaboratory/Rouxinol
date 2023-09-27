#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int n;
    cin >> n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        double a,b;
        a = 10000.0;
        b = 10000.0;
        if(x1 != x2){
            a = (y2 - y1) / (x2 - x1);
        }
        if(x3 != x4){
            b = (y4 - y3) / (x4 - x3);
        }
        if(fabs(b - a) < 0.0000000001){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

