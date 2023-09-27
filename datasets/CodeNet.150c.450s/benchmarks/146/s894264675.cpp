#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#define  PI 3.141592
int main(void){
    long double x1, x2, x3, x4, y1, y2, y3, y4, tilt_a, tilt_b;
    int n;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if(x1 == x2){
            if(x3 == x4) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            tilt_a = (y2-y1)/(x2-x1);
            tilt_b = (y4-y3)/(x4-x3);
            if(tilt_a == tilt_b){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}

