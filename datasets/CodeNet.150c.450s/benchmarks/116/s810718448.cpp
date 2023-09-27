#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
const int INF=1e9;
int main(){
  ll n,k;
  ll a[100100];
  while(cin>>n>>k&&(n||k)){
    REP(i,n)cin>>a[i];
    ll sum=0,ans=0;
    REP(i,n){
      if(i<k){
        sum+=a[i];
      }else{
        ans=max(ans,sum);
        sum-=a[i-k];
        sum+=a[i];
        ans=max(ans,sum);
      }
    }
    cout<<ans<<endl;
  }
}