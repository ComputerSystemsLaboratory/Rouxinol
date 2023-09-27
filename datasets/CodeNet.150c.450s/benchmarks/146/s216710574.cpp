#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

const double EPS = 1e-10;

signed main(){
    int n;
    cin >> n;
    double x[4], y[4];
    rep(i, 0, n){
        rep(j, 0, 4){
            cin >> x[j] >> y[j];
        }
        double h1, h2;
        int cnt = 0;
        if(fabs(x[1] - x[0]) < EPS) cnt++;
        else h1 = (y[1] - y[0]) / (x[1] - x[0]);
        if(fabs(x[3] - x[2]) < EPS) cnt++;
        else h2 = (y[3] - y[2]) / (x[3] - x[2]);
        if(fabs(h1 - h2) < EPS || cnt == 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}