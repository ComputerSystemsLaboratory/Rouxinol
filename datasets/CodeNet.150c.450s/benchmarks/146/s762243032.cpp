#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        double x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if(fabs((x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)) < 0.0000000001){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
