#include <iostream>

#define REP(i, x, n) for(int i=x; i<n; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

using namespace std;

int w[1000007];
int n, k;

bool check(int p){

    ll sum = 0;
    ll idx = 0;
    rep(i,k){
        ll sum = 0;
        while(sum + w[idx] <= p){
            sum += w[idx];
            idx++;
            if(idx == n) return true;
        }
    }
    return  false;
}


int main(){

    cin >> n >> k;
    rep(i,n) cin >> w[i];

    ll r = 100000 * 10000;
    ll l = 0;
    ll mid;
    while(r - l > 1){
       mid = (l+r) / 2;
       if(check(mid)) r = mid;
       else l = mid; 
    }
    
    cout << r << endl;

    return 0;
}