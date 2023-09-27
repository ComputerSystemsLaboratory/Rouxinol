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

#define MAX 100000
#define SENTINEL 2000000000

struct Card{
    char suit;
    int value;
};

struct Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(struct Card A[], int n, int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left;
    int n2 = right - mid;
    for( i = 0; i < n1; ++i) L[i] = A[left + i];
    for( i = 0; i < n2; ++i) R[i] = A[mid + i];
    L[n1].value = R[n2].value = SENTINEL;
    i = j = 0;
    for( k = left; k < right; ++k){
        if(L[i].value <= R[j].value){
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
        }
    }
}

void mergeSort(struct Card A[], int n, int left, int right){
    int mid;
    if( left + 1 < right ){
        mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int partition(struct Card A[], int n, int p, int r){
    int i, j;
    struct Card t, x;
    x = A[r];
    i = p - 1;
    for(j = p; j < r; ++j){
        if(A[j].value <= x.value){
            i++;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    t = A[i + 1]; A[i + 1] = A[r]; A[r] = t;
    return i + 1;
}

void quickSort(struct Card A[], int n, int p, int r){
    int q;
    if( p < r ){
        q = partition(A, n, p, r);
        quickSort(A, n, p, q - 1);
        quickSort(A, n, q + 1, r);
    }
}

int main(void) {
	int n, i, v;
	struct Card A[MAX], B[MAX];
	string S;
	int stable = 1;
	
	cin >> n;
	
	rep(i,n){
	    cin >> S >> v;
	    A[i].suit = B[i].suit = S[0];
	    A[i].value = B[i].value = v;
	}
	
	mergeSort(A, n, 0, n);
	quickSort(B, n, 0, n-1);
	
	rep(i,n){
	    if(A[i].suit != B[i].suit) stable = 0;
	}
	if(stable)cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	rep(i,n){
	    cout << B[i].suit << " " << B[i].value << endl;
	}
}
