#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

void solve(int n,int m){
    vector<int> a(n);
    iota(a.begin(),a.end(),1);
    reverse(a.begin(),a.end());
    rep(i,m){
        vector<int> na(n);
        int p,c;
        cin>>p>>c;
        rep(i,p-1){
            na[i+c]=a[i];
        }
        REP(i,p-1,p+c-1){
            na[i-p+1]=a[i];
        }
        REP(i,p+c-1,n)na[i]=a[i];
        swap(na,a);
    }
    cout<<a[0]<<endl;
}

int main(){
    int n,m;
    while(cin>>n>>m,n!=0){
        solve(n,m);
    }
    return 0;
}
