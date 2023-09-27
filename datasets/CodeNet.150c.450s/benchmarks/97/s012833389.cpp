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


void solve(int n){
    vector<int> x(n),y(n);
    int mx=0,my=0,Mx=0,My=0;
    rep(i,n-1){
        int k,d;
        cin>>k>>d;
        if(d==0){
            x[i+1]=x[k]-1;
            y[i+1]=y[k];
            mx=min(mx,x[i+1]);
        }
        if(d==2){
            x[i+1]=x[k]+1;
            y[i+1]=y[k];
            Mx=max(Mx,x[i+1]);
        }
        if(d==1){
            x[i+1]=x[k];
            y[i+1]=y[k]-1;
            my=min(my,y[i+1]);
        }
        if(d==3){
            x[i+1]=x[k];
            y[i+1]=y[k]+1;
            My=max(My,y[i+1]);
        }
    }
    cout<<Mx-mx+1<<" "<<My-my+1<<endl;
}
int main(){
    int n;
    while(cin>>n,n!=0)solve(n);
    return 0;
}
