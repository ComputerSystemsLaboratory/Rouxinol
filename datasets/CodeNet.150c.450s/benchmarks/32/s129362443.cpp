#include <bits/stdc++.h>
#define For(i, a, b) for(int (i)=(a); (i)<(b); (i)++)
#define rFor(i, a, b) for(int (i)=(a)-1; (i)>=(b); (i)--)
#define rep(i, n) For((i), 0, (n))
#define rrep(i, n) rFor((i), (n), 0)
using namespace std;
typedef long long lint;
typedef vector<vector<lint>> mat;

int m, nmin, nmax, p[100010];

int main(){
    while(true){
        cin >> m >> nmin >> nmax;
        if(m == 0) return 0;
        rep(i, m) cin >> p[i];
        int dmax = 0;
        int num = 0;
        For(i, nmin-1, nmax){
            if(p[i] - p[i+1] >= dmax){
                dmax = p[i] - p[i+1];
                num = i + 1;
            }
        }
        cout << num << endl;
    } 
}
