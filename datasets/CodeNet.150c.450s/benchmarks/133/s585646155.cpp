#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
#define rep(i,n) for(int i=0;i<n;i++)
#define repn(i,n) for(int i=1;i<=n;i++)
#define repr(e,x) for(auto& e:x)
using namespace std;
typedef long long ll;
typedef long double ld;

ll D;
ll c[26+1];
ll s[365+1][26+1];
ll t[365+1];

ll last[365+1];

int main(){
    cin>>D;
    repn(i,26) cin>>c[i];
    repn(i,D) repn(j,26) cin>>s[i][j];
    repn(i,D) cin>>t[i];

    ll v=0;
    repn(d,D){
        ll maxi=s[d][t[d]];
        ll idx=t[d];
        //cout<<idx<<':'<<maxi<<endl;
        v+=maxi;
        last[idx]=d;
        repn(i,26) v-=c[i]*(d-last[i]);
        cout<<v<<endl;
    }
}