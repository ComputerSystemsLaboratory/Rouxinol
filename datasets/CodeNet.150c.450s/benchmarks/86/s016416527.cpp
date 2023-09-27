#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
    int n, m, p;
    while(cin >> n >> m >> p, n+m+p){
        vector<int> x(n);
        int sum = 0;
        rep(i, n){cin >> x[i]; sum += x[i];}
        if(x[m-1] == 0) cout << 0 << endl;
        else cout << sum*(100-p)/x[m-1] << endl;
    }
}