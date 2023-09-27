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

void yes(){ cout << "Yes" << endl;}
void no(){ cout << "No" << endl;}

//-----------------------------------------
pair<char,int> num[100000+10];
pair<char,int> cop[100000+10];

int par(pair<char,int> *A,int las){
  int x = A[las].second;
  int i = -1;
  for(int j=0;j<las;j++){
    if(A[j].second <= x){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[las]);
  return i+1;
}
void q_sort(pair<char,int> *A, int len){
  if(len < 1) return ;
  int k = par(A,len);
  q_sort(A,k-1);
  q_sort(A+k+1,len-k-1);
}

void merge(pair<char,int> *A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  pair<char,int> *L, *R;
  L = (pair<char,int>*)malloc(sizeof(pair<char,int>)*(n1+1));
  R = (pair<char,int>*)malloc(sizeof(pair<char,int>)*(n2+1));
  for(int i=0;i<n1;i++){
    L[i] = A[left + i];
  }
  for(int i=0;i<n2;i++){
    R[i] = A[mid + i];
  }
  L[n1].second = 2*INF; // 編集
  R[n2].second = 2*INF; // 編集
  int i =0,j = 0;
  for(int k=left;k<right;k++){
    if(L[i].second<=R[j].second){
      A[k] = L[i++];
    }
    else{
      A[k] = R[j++];
    }
  }
  free(L);
  free(R);
}
void mergesort(pair<char,int> *A, int left, int right){
  if(left + 1 < right){
    int mid = (left + right) /2;
    mergesort(A,left,mid);
    mergesort(A,mid,right);
    merge(A,left,mid,right);
  }
}
//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  int n;
  cin >> n;

  REP(i,n) cin >> num[i].first >> num[i].second;

  REP(i,n) cop[i] = num[i];

  mergesort(cop,0,n);
  q_sort(num,n-1);

  bool f = true;
  REP(i,n) if(cop[i] != num[i]) f = false;

  if(f) cout << "Stable"<<endl;
  else cout << "Not stable"<<endl;

  REP(i,n) cout << num[i].first << " " << num[i].second << endl;





  return 0;
}

