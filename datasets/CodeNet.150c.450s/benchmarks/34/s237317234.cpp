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
using namespace std;
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; ++i )
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pint;
typedef pair<ll,int> pli;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

int main(){
    ll a[40];
    a[0]=1;a[1]=1;a[2]=2;
    rep(i,30)a[i+3]=a[i+2]+a[i+1]+a[i];
    int n;
    while(cin>>n,n!=0){
        cout<<(a[n]+3649)/3650<<endl;
    }
    return 0;
}

