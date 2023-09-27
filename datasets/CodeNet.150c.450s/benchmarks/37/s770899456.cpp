#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

signed main(){
  double a,b,c,d,e,f;
  while(cin>>a){
    cin>>b>>c>>d>>e>>f;
    double x=(f*b-e*c)/(b*d-e*a);
    double y=(c-a*x)/b;
    if(abs(x)==0)x=0.000;
    if(abs(y)==0)y=0.000;
    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}