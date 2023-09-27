#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <list>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(n);i++)

ll a[4000];

ll sum(ll i,ll j){
    ll s=0;
    for(ll k=i;k<=j;k++) s += a[k];
    return s;
}

int main(){
    ll r,c;
    cin >> r >> c;
    ll a[110][110]={0};
    rep(i,r){
        rep(j,c){
            cin >> a[i][j];
            a[i][c] += a[i][j];
            a[r][j] += a[i][j];
            a[r][c] += a[i][j];
        }
    }
    rep(i,r+1){
        cout << a[i][0];
        for(ll j=1;j<c+1;j++) cout << ' ' << a[i][j];
        cout << endl;
    }
}
