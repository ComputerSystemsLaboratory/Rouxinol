#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;


int main(){
    int m,nmn,nmx;
    while(cin >> m >> nmn >> nmx,m) {
        int gmx = 0,mxn = 0;
        vi p;
        rep(i,m){
            int tmp;
            cin >> tmp;
            p.pb(tmp);
        }
        sort(p.begin(),p.end());
        REP(n,nmn,nmx + 1){
            if(gmx <= (abs(p[m - n] - p[m - n - 1]))) {
                gmx = abs(p[m - n ] - p[m - n - 1]);
                mxn = n;
            }
        }
        cout << mxn << endl;
    }
    return 0;
}

