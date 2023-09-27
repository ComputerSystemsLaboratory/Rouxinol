#include <bits/stdc++.h>
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); i++) 
#define FOR(i, a, b) for(int (i) = a; (i) < (int)b; i++)
#define RREP(i, n) for(int (i)=((int)(n)-1); (i)>=0; i--)
#define RFOR(i, a, b) for(int (i) =((int)(b)-1); (i)>=(int)a; i--)
#define ALL(v) (v).begin(),(v).end()
#define MOD 1000000007
#define NIL -1
#define FI first
#define SE second
#define MP make_pair
#define PB push_back
#define SZ(x)  (int)x.size()
#define SP(x)  setprecision((int)x)


using namespace std ;
typedef long long ll;
using Graph = vector<vector<int>>;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef vector<string> vstr;
typedef pair<int, int> pii;
const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;} //最大公約数
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;} //最小公倍数

//-------------------------------------------------
// 
void yes(){
  cout <<"yes"<<endl ;
}
void no(){
  cout <<"no"<<endl ;
}


//-------------------------------------------------
// メモ
/*






*/
//-------------------------------------------------


int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m ;
  cin >> n >> m ;
  vint seen(n,0) ;
  vector<queue<int>> gra(n) ;
  stack<int> S ;
  REP(i,m){
    int a, b ;
    cin >>a >> b ;
    gra[a].push(b) ;
    gra[b].push(a) ;
  }
  
  int cnt = 1 ;
  vint num(n,0) ;
  
  S.push(0) ;
  seen[0] = 1 ;
  num[0] = cnt ;
  
  while(!S.empty()){
    int k = S.top() ;
    
    while(1){
      if(gra[k].empty()){
        S.pop() ;
        break ;
      }
      int l = gra[k].front() ;
      if(seen[l]==1){
        gra[k].pop() ;
        continue ;
      }
      else{
        S.push(l) ;
        gra[k].pop() ;
        seen[l] = 1 ;
        num[l] = num[k] ;
        break ;
      }
    }
    
    if(S.empty()){
      REP(i,n){
        if(seen[i]==0){
          S.push(i) ;
          seen[i] = 1 ;
          cnt++ ;
          num[i] = cnt ;
          break ;
        }
      }
    }
  }
  
  int q ;
  cin >> q ;
  REP(i,q){
    int x, y ;
    cin >> x >> y ;
    if(num[x]==num[y]){
      yes() ;
    }
    else{
      no() ;
    }
  }
  
  

  return 0 ;
}


