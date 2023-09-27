#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    const double EPS = 1e-12;
    double x[5];
    double y[5];
    double s;
    double t;
    double u;
    double v;
    double m;
    int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];

        s = x[1] - x[0];
        t = y[1] - y[0];
        u = x[3] - x[2];
        v = y[3] - y[2];

        if(s * v - t * u > 0){
            m = s * v - t * u;
        }
        else{
            m = t * u - s * v;
        }

        if(m < EPS){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}