#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(a) max((a),-(a))
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define repe(i,n) rep(i,(n)+1)
#define per(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define pere(i,n) rep(i,(n)+1)
#define all(x) (x).begin(),(x).end()
#define SP <<" "<<
#define RET return 0
#define MOD 1000000007
#define INF 1000000000000000000

typedef long long LL;
typedef long double LD;

int main(){
  int m;
  cin >> m;
  string s,t;
  for(int i=0;i<m;i++){
    cin >> s;
    set<string> se;
    t=s;
    for(int j=0;j<s.length();j++){
      t=s;
      se.insert(t);
      se.insert(t.substr(j,s.length()-j)+t.substr(0,j));
      reverse(t.begin(),t.begin()+j);
      se.insert(t);
      se.insert(t.substr(j,s.length()-j)+t.substr(0,j));
      t=s;
      reverse(t.begin()+j,t.end());
      se.insert(t);
      se.insert(t.substr(j,s.length()-j)+t.substr(0,j));
      t=s;
      reverse(t.begin(),t.begin()+j);
      reverse(t.begin()+j,t.end());
      se.insert(t);
      se.insert(t.substr(j,s.length()-j)+t.substr(0,j));
    }
    // for(auto ss:se){
    //   cout << ss << endl;
    // }
    cout << se.size() << endl;
  }
  return 0;
}

