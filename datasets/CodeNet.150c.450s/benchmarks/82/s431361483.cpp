#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<string> vstr;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll, ll>> vpll;
typedef priority_queue<ll, vector<ll>, greater<ll>> spqll;  // 小さい順に取り出し
typedef priority_queue<ll, vector<ll>, less<ll>> bpqll;     // 大きい順に取り出し

#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define IREP(i, v) for (auto i = (v).begin(); i != (v).end(); i++)
#define FI first
#define SE second
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define TS to_string
#define NP next_permutation
#define ALL(v) (v).begin(), (v).end()
#define SZ(x) (ll) x.size()
#define SP(x) setprecision((ll)x)


ll INF = 1e9;
ll MOD = 1000000007;
ll LINF = 1e18;
ld EPS = 1e-9;
ld PI = M_PI;
vll dx = {1, 0, -1, 0, 1, -1, -1, 1};
vll dy = {0, 1, 0, -1, 1, 1, -1, -1};
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;} //最大公約数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b;}     //最小公倍数

void yes(){ cout << "yes" << endl;}
void no(){ cout << "no" << endl;}

//-----------------------------------------
template<class T>
class Dice{
  private:
    T a, b, c, d, e, f, z;
    T table[6][6];
  public:
    void make(T A, T B, T C, T D, T E, T F){
      a = A;
      b = B;
      c = C;
      d = D;
      e = E;
      f = F;
      table[0][0] = z;
      table[0][1] = c;
      table[0][2] = e;
      table[0][3] = b;
      table[0][4] = d;
      table[0][5] = z;

      table[1][0] = d;
      table[1][1] = z;
      table[1][2] = a;
      table[1][3] = f;
      table[1][4] = z;
      table[1][5] = c;

      table[2][0] = b;
      table[2][1] = f;
      table[2][2] = z;
      table[2][3] = z;
      table[2][4] = a;
      table[2][5] = e;

      table[3][0] = e;
      table[3][1] = a;
      table[3][2] = z;
      table[3][3] = z;
      table[3][4] = f;
      table[3][5] = b;

      table[4][0] = c;
      table[4][1] = z;
      table[4][2] = f;
      table[4][3] = a;
      table[4][4] = z;
      table[4][5] = d;

      table[5][0] = z;
      table[5][1] = d;
      table[5][2] = b;
      table[5][3] = e;
      table[5][4] = c;
      table[5][5] = z;
    }

    void rot(char s){
      if(s == 'W'){
        T tmp = a;
        a = c;
        c = f;
        f = d;
        d = tmp;
      }
      else if(s == 'E'){
        T tmp = a;
        a = d;
        d = f;
        f = c;
        c = tmp;
      }
      else if(s == 'S'){
        T tmp = a;
        a = e;
        e = f;
        f = b;
        b = tmp;
      }
      else{
        T tmp = a;
        a = b;
        b = f; 
        f = e;
        e = tmp;
      }
    }

    T co(){
      return a;
    }

    int code(T x){
      if(x==a) return 1;
      else if(x==b) return 2;
      else if(x==c) return 3;
      else if(x==d) return 4;
      else if(x==e) return 5;
      else return 6;
    }

    T fix(int x){
      if(x==1) return a;
      else if(x==2) return b;
      else if(x==3) return c;
      else if(x==4) return d;
      else if(x==5) return e;
      else return 6;
    }
    
    T rig(T F, T S){
      int num1 = code(F) -1;
      int num2 = code(S) -1;
      return table[num1][num2];
    }
};

//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  Dice<int> dis;
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  dis.make(a,b,c,d,e,f);
  int m;
  cin >> m;
  REP(i,m){
    int o, p;
    cin >> o >> p;
    cout << dis.rig(o,p) <<endl;;
  }



  return 0;
}

