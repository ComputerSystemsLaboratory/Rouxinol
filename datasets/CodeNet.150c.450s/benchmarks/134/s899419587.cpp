#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <tuple>
#include <cassert>
#include <exception>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<P> vp;
#define rep(i,a,n) for(ll i = (a);i < (n);i++)
#define per(i,a,n) for(ll i = (a);i > (n);i--)
#define lep(i,a,n) for(ll i = (a);i <= (n);i++)
#define pel(i,a,n) for(ll i = (a);i >= (n);i--)
#define clr(a,b) memset((a),(b),sizeof(a))
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz size()
#define print(X) cout << (X) << endl
#define fprint(NUM,X) cout << fixed << setprecision(NUM) << (X) << endl
#define fprints(NUM,X,Y) cout << fixed << setprecision(NUM) << (X) << " " << (Y) << endl
const ll INF = 1e+9+7;
ll n,m,l;
string s,t;
ll d[200010],dp[550][550];
double w[1000],v[1000];
double box[200010];


#define MAX 100000
#define NIL -1

struct Node{ int p,l,r; };
struct Node T[MAX];
int N;

void preParse(int u){
  if(u == NIL)return;
  printf(" %d",u);
  preParse(T[u].l);
  preParse(T[u].r);
}

void inParse(int u){
  if(u == NIL)return;
  inParse(T[u].l);
  printf(" %d",u);
  inParse(T[u].r);
}

void postParse(int u){
  if(u == NIL)return;
  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d",u);
}

int main(){
  int v,l,r;
  cin >> N;
  for(int i = 0;i < N;i++)T[i].p = NIL;
  for(int i = 0;i < N;i++){
    cin >> v >> l >> r;
    T[v].l = l;
    T[v].r = r;
    if(l != NIL)T[l].p = v;
    if(r != NIL)T[r].p = v;
  }
  
  int root;

  for(int i = 0;i < N;i++){
    if(T[i].p == NIL)root = i;
  }

  printf("Preorder\n");
  preParse(root);
  puts("");
  printf("Inorder\n");
  inParse(root);
  puts("");
  printf("Postorder\n");
  postParse(root);
  puts("");
  
  return 0;
}
