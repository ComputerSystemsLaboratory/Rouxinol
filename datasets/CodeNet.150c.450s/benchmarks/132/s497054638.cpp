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
    vector<int> cnt(n);
    int cur=m;
    int idx=0;
    while(1){
        if(cur){
            ++cnt[idx];
            --cur;
        }
        else if(cnt[idx]){
            cur+=cnt[idx];
            cnt[idx]=0;
        }
        if(cnt[idx]==m){
            cout<<idx<<endl;
            return;
        }
        idx=(idx+1)%n;
    }
}

int main(){
    int n,m;
    while(cin>>n>>m,n!=0){
        solve(n,m);
    }
    return 0;
}
