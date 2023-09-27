#include <bits/stdc++.h>
using namespace std;
using ll=long long;

#define itn long long
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define rrep(i,n) for(int i=(int)(n);i>=0;--i)
#define debug(x) cout << #x << "=" << (x) << endl;
const ll MOD=1e9+7;

template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> void fail(T v){cout << v << endl;exit(0);}
//template end

void solve(){
  int N;
  cin>>N;
  string c=".,!? ";
  string al="pqrstuvwxyz";
  rep(i,N){
    string s;
    cin>>s;
    int ct=0;
    for(int i=0;i<s.size();i++)
      if(s[i]=='0'){
        if(ct==0)continue;ct--;
        int l=s[i-1]-'1';
        if(!l)cout<<c[ct%5];
        else if(l==6)
          cout<<al[ct%4];
        else if(l==7)
          cout<<al[4+ct%3];
        else if(l==8)
          cout<<al[7+ct%4];
        else cout<<(char)(--l*3+ct%3+'a');ct=0;
      }else ct++;
    cout<<endl;
  }
}
 
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  solve();
  return 0;
}
