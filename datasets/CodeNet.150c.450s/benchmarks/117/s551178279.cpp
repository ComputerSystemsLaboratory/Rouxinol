// includes
#include <cstdio>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include <functional>
#include <cmath>
#include <climits>
#include <bitset>
#include <list>
#include <random>

// macros
#define ll long long int
#define pb emplace_back
#define mk make_pair
#define pq priority_queue
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define rep(i, n) FOR(i, 0, n)
#define rrep(i, n) for(int i=((int)(n)-1);i>=0;i--)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())

using namespace std;

//  types
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
typedef pair<ll, ll> Pll;
typedef pair<double, double> Pd;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;
const int mod = 1e9 + 7;

// solve
template <class T>bool chmax(T &a, const T &b){if(a < b){a = b; return 1;} return 0;}
template <class T>bool chmin(T &a, const T &b){if(a > b){a = b; return 1;} return 0;}
int res = 0;

template <typename T>
void merge(vector<T> &a, int l, int m, int r){
  int n1 = m - l;
  int n2 = r - m;
  vector<T> L, R;
  for(int i = 0; i < n1; i++)L.push_back(a[l+i]);
  for(int i = 0; i < n2; i++)R.push_back(a[m+i]);
  L.push_back(numeric_limits<T>::max());
  R.push_back(numeric_limits<T>::max());
  int i = 0, j = 0;
  for(int k = l; k < r; k++){
    res++;
    if(L[i] <= R[j]){
      a[k] = L[i];
      i++;
    }else{
      a[k] = R[j];
      j++;
    }
  }
}

template <typename T>
void merge_sort(vector<T> &a, int l, int r){
  if(l + 1 < r){
    int m = (l + r) / 2;
    merge_sort<T>(a, l, m);
    merge_sort<T>(a, m, r);
    merge<T>(a, l, m, r);
  }
}

template <typename T>
void merge_sort(vector<T> &a){
  merge_sort<T>(a, 0, a.size());
}

int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<ll> b(n);
  rep(i, n)cin >> b[i];
  merge_sort(b);
  for(int i = 0; i < n; i++){
    cout << b[i] << "\n "[i + 1 != n];
  }
  cout << res << endl;
	return 0;
}

