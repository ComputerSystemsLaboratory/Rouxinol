#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;

int main(){
    int m, nmin, nmax;
    while(cin >> m >> nmin >> nmax, m && nmin && nmax){
        vector<int> p(m);
        rep(i, 0, m) cin >> p[i];
        int MAX = -1;
        int ans = -1;
        rep(i, nmin, nmax + 1){
            int tmp = p[i - 1] - p[i];
            if(tmp >= MAX){
                MAX = tmp;
                ans = i;
            }
        }
        cout << ans << endl;
    }
}