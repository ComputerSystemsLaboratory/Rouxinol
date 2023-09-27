#include <bits/stdc++.h>

using namespace std;


#define REP(i,n) for(ll i=0;i<n;++i)
#define RREP(i,n) for(ll i=n-1;i>=0;--i)
#define FOR(i,m,n) for(ll i=m;i<n;++i)
#define RFOR(i,m,n) for(ll i=n-1;i>=m;--i)
#define ALL(v) (v).begin(),v).end()

#define PB(a) push_back(a)
#define MOD 1000000007

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x,y,s;
  while(true){
      cin>>x>>y>>s;
      if(x==0&&y==0&&s==0) break;
      int ma=-1;
      for(int i=1;i<s;i++){
          for(int j=1;j<s;j++){
              if(i*(100+x)/100+j*(100+x)/100==s){
                  ma=max(ma,i*(100+y)/100+j*(100+y)/100);
              }
          }
      }
      cout<<ma<<endl;
  }
  return 0;
}