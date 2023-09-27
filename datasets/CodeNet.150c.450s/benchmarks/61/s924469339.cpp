#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
int main(){
  int n,a,b,c,x;
  vector<int> y(101);
  cin >> n >> a >> b >> c >> x;
  while(n!=0){
    rep(i,n) cin >> y[i];
    int s=-1,f=x,p=0;
    while(p!=n&&s<=10000){
      if(f==y[p]) p++;
      s++;
      f=(a*f+b)%c;
    }
    if(s>10000) cout << -1 << endl;
    else cout << s << endl;
    cin >> n >> a >> b >> c >> x;
  }
}

