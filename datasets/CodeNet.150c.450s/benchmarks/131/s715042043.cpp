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
  while(1){
    int a,l;
    cin >> a >> l;
    if(l==0) return 0;
    map<int,int> se;
    se[a]=0;
    string s;
    int ma,mi;
    int t;
    for(int i=0;1;i++){
      s=to_string(a);
      t=s.length();
      for(int j=0;j<l-t;j++) s.push_back('0');
      // cout << s << endl;
      sort(all(s),greater<char>());
      ma=stoi(s);
      sort(all(s));
      mi=stoi(s);
      a=ma-mi;
      if(se.find(a)!=se.end()){
        cout << se[a] SP a SP i+1-se[a] << endl;
        break;
      }
      se[a]=i+1;
    }
  }
  return 0;
}

