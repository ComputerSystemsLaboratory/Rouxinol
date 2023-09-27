#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define int long long
using namespace std;
const int MOD=1e9+7;
const int INF=1e15;
template<typename T> void cmax(T &a, T b) {a = max(a, b);}
template<typename T> void cmin(T &a, T b) {a = min(a, b);}



signed main(){
  int n;
  cin>>n;
  rep(i,n){
    string s;
    cin>>s;
    set<string> st;
    loop(i,1,s.size()){
      string t=s.substr(0,i);
      string u=s.substr(i);
  //cout<<t<<' '<<u<<endl;
      string rt=t,ru=u;
      reverse(all(rt));
      reverse(all(ru));

      st.insert(t+u);
      st.insert(u+t);
      st.insert(t+ru);
      st.insert(ru+t);
      st.insert(rt+u);
      st.insert(u+rt);
      st.insert(rt+ru);
      st.insert(ru+rt);
    }
    cout<<st.size()<<endl;
  }

 return 0;
}

