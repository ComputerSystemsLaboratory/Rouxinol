#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;


int main(){
    int n,m,p;
    while(cin >> n >> m >> p,n) {
        vi x;
        int tmp;
        int sum = 0;
        rep(i,n){
            cin >> tmp;
            x.pb(tmp);
            sum += tmp;
        }
        if(x[m - 1] == 0) cout << 0 << endl;
        else cout << sum * (100 - p) / x[m - 1] << endl;
    }
    return 0;
}

