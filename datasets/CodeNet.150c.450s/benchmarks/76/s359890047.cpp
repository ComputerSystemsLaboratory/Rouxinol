#include<bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
typedef long long ll;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define REP(i,num,n) for(ll i=num, i##_len=(n); i<i##_len; ++i)
#define repprev(i,a,b) for(ll i=b-1;i>=a;i--)
#define reprev(i,n) repprev(i,0,n)
using namespace std;
#define sz(x) ((int)(x).size())
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
#define MEMSET(v, h) memset((v), h, sizeof(v))
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
template<class T> int former(const vector<T> &v, T x){
   return upper_bound(v.begin(),v.end(),x) - v.begin() - 1;
}
template<class T> int latter(const vector<T> &v, T x){
    return lower_bound(v.begin(),v.end(),x) - v.begin();
}
#define pb push_back
#define mp make_pair
#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define BIT_FLAG_0 (1<<0) // 0000 0000 0000 0001
#define BIT_FLAG_1 (1<<1) // 0000 0000 0000 0010
#define BIT_FLAG_2 (1<<2) // 0000 0000 0000 0100
#define BIT_FLAG_3 (1<<3) // 0000 0000 0000 1000
#define BIT_FLAG_4 (1<<4) // 0000 0000 0001 0000
#define BIT_FLAG_5 (1<<5) // 0000 0000 0010 0000
#define BIT_FLAG_6 (1<<6) // 0000 0000 0100 0000
#define BIT_FLAG_7 (1<<7) // 0000 0000 1000 0000
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
const ll LLINF = 1LL<<60;
const int INTINF = 1<<29;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

struct UnionFind {
    vector<ll> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(ll n) : par(n, -1) { }
    void init(ll n) { par.assign(n, -1); }

    ll root(ll x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    bool issame(ll x, ll y) {
        return root(x) == root(y);
    }

    bool merge(ll x, ll y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    ll size(ll x) {
        return -par[root(x)];
    }
};


template <typename T>
vector<T> dijkstra(int s,vector<vector<pair<int, T> > > & G){
   const T INF = numeric_limits<T>::max();
   using P = pair<T, int>;
   int n=G.size();
   vector<T> d(n,INF);
   vector<int> b(n,-1);
   priority_queue<P,vector<P>,greater<P> > q;
   d[s]=0;
   q.emplace(d[s],s);
   while(!q.empty()){
     P p=q.top();q.pop();
     int v=p.second;
     if(d[v]<p.first) continue;
     for(auto& e:G[v]){
       int u=e.first;
       T c=e.second;
       if(d[u]>d[v]+c){
         d[u]=d[v]+c;
         b[u]=v;
         q.emplace(d[u],u);
       }
     }
   }
   return d;
}

const int dx[4] = {1, 0, -1, 0}; // const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[4] = {0, 1, 0, -1}; // const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    
    while( x != NIL ){
        y = x;
        if(z->key < x->key){
            x = x->left;
        } else {
            x = x->right;
        }
    }
    z->parent = y;
    if ( y == NIL ){
        root = z;
    } else {
        if ( z->key < y->key ){
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void find(Node *u, int key){
    while( u != NIL ){
        if(u->key > key){
            u = u->left;
        } else if(u->key < key){
            u = u->right;
        } else {
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
}

void inorder(Node *u){
    if ( u == NIL ) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}
void preorder(Node *u){
    if ( u == NIL ) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(void) {
      int n,i,x;
      string com;
      cin >> n;
      rep(i,n){
          cin >> com;
          if( com == "insert" ){
              cin >> x;
              insert(x);
          } else if ( com == "print" ){
              inorder(root);
              printf("\n");
              preorder(root);
              printf("\n");
          } else if ( com == "find" ){
              cin >> x;
              find(root, x);
          }
      }
      
      return 0;
}
