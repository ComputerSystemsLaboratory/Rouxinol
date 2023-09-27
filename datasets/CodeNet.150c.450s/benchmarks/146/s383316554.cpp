#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

double x[4], y[4];
int main(void){
    double eps = 1e-10;
    int n;
    cin >> n;
    rep(data, n) {
        rep(i, 4) cin >> x[i] >> y[i];
        if(x[1]==x[0] && x[3]==x[2]) {
            if(y[1]!=y[0] && y[3]!=y[2]) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else if(x[1]==x[0] && x[3]==x[2]) cout << "NO" << endl;
        else if(abs((y[1]-y[0])/(x[1]-x[0]) - (y[3]-y[2])/(x[3]-x[2])) < eps) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}