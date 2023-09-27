#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define ll long long int

using namespace std;

int main(void) {
    int n,k;
    while(cin>>n>>k && n>0){
        vector<ll> a(n);
        REP(i,n){
            cin >> a[i];
        }
        ll s=0;
        REP(i,k){
            s+=a[i];
        }
        ll ans=s;
        FOR(i,k,n-1){
            s+=a[i];
            s-=a[i-k];
            ans=max(ans,s);
        }
        cout << ans << endl;
    }
    
    return 0;
}