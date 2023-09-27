#include<bits/stdc++.h>
#define fi first
#define se second
#define show(x) cerr<<#x<<"="<<x<<"\n"
typedef long long ll;
using namespace std;
//const ll MOD=(ll)1e9+7;
const int inf=100000000;
const int dy[]={1,0,-1};
const int dx[]={1,0,-1};
int n,m,h,w;
string s;
vector<int> a,b;
int dp[1000001],dp2[1000001];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout<<fixed;
#ifdef LOCAL_DEFINE
  FILE *stream1;
  //FILE *stream2;
  stream1=freopen("in","r",stdin);
  //stream2=freopen("out","w",stdout);
  if(stream1==NULL)return 0;
  //if(stream2==NULL)return 0;
#endif
  for(int i=1;i<200;i++){
    a.push_back(i*(i+1)*(i+2)/6);
    int temp=i*(i+1)*(i+2)/6;
    if(temp&1)b.push_back(temp);
  }
  for(int i=0;i<=1000000;i++)dp[i]=inf;
  dp[0]=0;
  for(int i=0;i<=1000000;i++){
    for(int j=0;j<(int)a.size();j++){
      if(i+a[j]<=1000000){
        dp[i+a[j]]=min(dp[i+a[j]],dp[i]+1);
      }
    }
  }
  for(int i=0;i<=1000000;i++)dp2[i]=inf;
  dp2[0]=0;
  for(int i=0;i<=1000000;i++){
    for(int j=0;j<(int)b.size();j++){
      if(i+b[j]<=1000000){
        dp2[i+b[j]]=min(dp2[i+b[j]],dp2[i]+1);
      }
    }
  }
  while(cin>>n,n){
    cout<<dp[n]<<" "<<dp2[n]<<endl;
  }
#ifdef LOCAL_DEFINE
  cerr<<"Time elapsed: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
  fclose(stream1);
  //fclose(stream2);
#endif
  return 0;
}





