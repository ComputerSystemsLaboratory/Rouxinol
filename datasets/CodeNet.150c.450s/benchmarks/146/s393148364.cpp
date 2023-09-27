#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    int n;
    cin >> n;
    for(int p=0; p < n; p++){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        x1 -= x2; y1 -= y2; x3 -= x4; y3 -= y4;
        cout << (abs(x1*y3-y1*x3) < 1e-10?"YES":"NO") << endl;
    }
}