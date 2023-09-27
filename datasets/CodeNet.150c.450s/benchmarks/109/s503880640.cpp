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
int a[90000];

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
  int n;
  while(cin>>n,n){
    for(int i=0;i<90000;i++)a[i]=0;
    for(int i=0;i<n;i++){
      string s,t;cin>>s>>t;
      int start=stoi(s.substr(0,2))*60*60;
      start+=stoi(s.substr(3,2))*60;
      start+=stoi(s.substr(6,2));
      int end=stoi(t.substr(0,2))*60*60;
      end+=stoi(t.substr(3,2))*60;
      end+=stoi(t.substr(6,2));
      a[start]++;
      a[end]--;
      //cerr<<"start="<<start<<" end="<<end<<endl;
    }
    for(int i=1;i<90000;i++)a[i]=a[i-1]+a[i];
    int ans=0;
    for(int i=0;i<90000;i++)ans=max(ans,a[i]);
    cout<<ans<<endl;
  }
#ifdef LOCAL_DEFINE
  cerr<<"Time elapsed: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
  fclose(stream1);
  //fclose(stream2);
#endif
  return 0;
}





