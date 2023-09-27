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
ll NIL = -1;
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
struct Node{
  int par, rig, lef;
};

Node T[100];

int par(int i){
  return T[i].par;
}
int sib(int i){
  int p = T[i].par;
  if(p == NIL) return NIL;
  Node t = T[p];
  if(t.lef == i) return t.rig;
  return t.lef;
}
int deg(int i){
  int res = 0;
  if(T[i].lef != NIL) res++;
  if(T[i].rig != NIL) res++;
  return res;
}
int dep(int i){
  int p = T[i].par;
  if(p == NIL) return 0;
  return dep(p) + 1;
}
int hei(int i){
  if(i == NIL) return -1;
  Node t = T[i];
  return max(hei(t.lef),hei(t.rig)) + 1;
}
string tag(int i){
  if(T[i].par == NIL) return "root";
  if(T[i].lef == NIL && T[i].rig == NIL) return "leaf";
  return "internal node";
}
void print(int i){
  cout << "node " << i <<":";
  cout << " parent = " << par(i) << ",";
  cout << " sibling = " << sib(i) << ",";
  cout << " degree = " << deg(i) << ",";
  cout << " depth = " << dep(i) << ",";
  cout << " height = " << hei(i) << ", ";
  cout << tag(i) <<endl;
}
void prepri(int i){
  cout << " " << i;
  if(T[i].lef != NIL) prepri(T[i].lef);
  if(T[i].rig != NIL) prepri(T[i].rig);
}
void inpri(int i){
  if(T[i].lef != NIL) inpri(T[i].lef);
  cout << " " << i;
  if(T[i].rig != NIL) inpri(T[i].rig);
}
void pospri(int i){
  if(T[i].lef != NIL) pospri(T[i].lef);
  if(T[i].rig != NIL) pospri(T[i].rig);
  cout << " " << i;
}

//-----------------------------------------
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    T[i].par = NIL;
    T[i].lef = NIL;
    T[i].rig = NIL;
  }
  for(int i=0;i<n;i++){
    int a, b, c;
    cin >> a >> b >> c ;
    T[a].lef = b;
    T[a].rig = c;
    if(b != NIL) T[b].par = a;
    if(c != NIL) T[c].par = a;
  }
  cout << "Preorder" << endl;
  for(int i=0;i<n;i++){
    if(tag(i)=="root"){
      prepri(i);
      cout << endl;
    }
  }
  cout << "Inorder" <<endl;
  for(int i=0;i<n;i++){
    if(tag(i)=="root"){
      inpri(i);
      cout << endl;
    }
  }
  cout << "Postorder" <<endl;
  for(int i=0;i<n;i++){
    if(tag(i)=="root"){
      pospri(i);
      cout << endl;
    }
  }


  return 0;
}


