#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
int mod=1e9+7;
int mod2=998244353;

signed main(){
  while(true){
    int n,a,b,c,x;
    cin>>n>>a>>b>>c>>x;
    if(!n&&!a&&!b&&!c&&!x)break;
    vector<int> y(n);
    for(int i=0;i<n;i++)cin>>y[i];
    int np=0;
    bool f=false;
    if(x==y[0])np++;
    for(int i=0;i<=10000;i++){
      if(np==n){
        cout<<i<<endl;
        f=true;
        break;
      }
      x=(a*x+b)%c;
      if(x==y[np])np++;
    }
    if(!f)cout<<-1<<endl;
  }
}

