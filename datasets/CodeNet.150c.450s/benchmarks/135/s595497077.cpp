#include<bits/stdc++.h>
#define fi first
#define se second
#define show(x) cerr<<#x<<"="<<x<<"\n"
typedef long long ll;
using namespace std;
//const ll MOD=(ll)1e9+7;
//const ll inf=(ll)1e14;
const int dy[]={1,0,-1};
const int dx[]={1,0,-1};
int n,m,h,w;
string s;

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
  while(cin>>n>>m,n){
    int w[1502],h[1502];
    h[0]=0;
    for(int i=1;i<=n;i++){
      cin>>h[i];
    }
    w[0]=0;
    for(int i=1;i<=m;i++){
      cin>>w[i];
    }
    for(int i=0;i<=m;i++){
      if(i==0)continue;
      w[i]=w[i-1]+w[i];
    }
    for(int i=0;i<=n;i++){
      if(i==0)continue;
      h[i]=h[i-1]+h[i];
    }
    vector<int> v;
    for(int i=0;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        v.push_back(h[j]-h[i]);
      }
    }
    sort(v.begin(),v.end());
    /*for(int i=0;i<(int)v.size();i++){
      cout<<v[i]<<" ";
    }*/
    //cout<<endl;
    int ans=0;
    for(int i=0;i<=m;i++){
      for(int j=i+1;j<=m;j++){
        int hen=w[j]-w[i];
        ans+=upper_bound(v.begin(),v.end(),hen)-lower_bound(v.begin(),v.end(),hen);
      }
    }
    cout<<ans<<endl;
  }
#ifdef LOCAL_DEFINE
  cerr<<"Time elapsed: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
  fclose(stream1);
  //fclose(stream2);
#endif
  return 0;
}





