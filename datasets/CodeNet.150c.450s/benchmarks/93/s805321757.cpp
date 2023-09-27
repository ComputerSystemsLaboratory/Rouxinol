#include "bits/stdc++.h"
 
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<VVI> VVVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef long long LL;
typedef priority_queue<int> PQ_DESC;
typedef priority_queue<int, vector<int>, greater<int>> PQ_ASC;
typedef priority_queue<PII> PQ_DESC_PII;
typedef priority_queue<PII, vector<PII>, greater<PII>> PQ_ASC_PII;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<VVLL> VVVLL;

#define SORT_ASC(c) sort((c).begin(), (c).end())
#define SORT_DESC(c) sort((c).begin(), (c).end(), greater<typeof((c).begin())>())
 
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define FORL(i,a,b) for(LL i=(a);i<(b);++i)
#define REPL(i,n)  FORL(i,0,n)
#define ALL(a) (a).begin(),(a).end()
 
const double EPS = 1e-10;
const double PI  = acos(-1.0);

 //debug func
template<typename T>
void vprint(vector<T> v) {
    for(auto x : v) {
        cerr << x << " ";
    }
    cerr << endl;
}
 
template<typename T>
void vvprint(vector<vector<T>> vv) {
    REP(i, vv.size()) {
        REP(j, vv[i].size()) {
            cerr << vv[i][j] << " ";
        }
        cerr << endl;
    }
}

template <typename Iterator>
inline bool next_combination(const Iterator first, Iterator k, const Iterator last)
{
   /* Credits: Thomas Draper */
   if ((first == last) || (first == k) || (last == k))
      return false;
   Iterator itr1 = first;
   Iterator itr2 = last;
   ++itr1;
   if (last == itr1)
      return false;
   itr1 = last;
   --itr1;
   itr1 = k;
   --itr2;
   while (first != itr1)
   {
      if (*--itr1 < *itr2)
      {
         Iterator j = k;
         while (!(*itr1 < *j)) ++j;
         iter_swap(itr1,j);
         ++itr1;
         ++j;
         itr2 = k;
         rotate(itr1,j,last);
         while (last != j)
         {
            ++j;
            ++itr2;
         }
         rotate(k,itr2,last);
         return true;
      }
   }
   rotate(first,k,last);
   return false;
}

inline double get_time_sec(void){
    return static_cast<double>(chrono::duration_cast<chrono::nanoseconds>(chrono::steady_clock::now().time_since_epoch()).count())/1000000000;
}

template<typename T>
T lcm(T a, T b) {
    return (a / __gcd(a, b)) * b;
}

template<typename T>
map<T, T> prime_list(T n) {
    map<T, T> ret;
    for(T i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            ret[i] = 0;
            while(n % i == 0) {
                n /= i;
                ret[i]++;
            }
        }
    }
    if(n != 1) ret[n]++;
    return ret;
}

#define MOD 1000000007

LL mypow(LL a, LL n) {
    if(n == 0) return 1;
    if(n == 1) return a % MOD;
    if(n % 2 == 1) return (a * mypow(a, n-1)) % MOD;
    LL t = mypow(a, n/2);
    return (t * t) % MOD; 
}

LL mycomb(LL n, LL k) {
    if(n == 0 || n == k) return 1;
    LL x = 1, y = 1;
    REP(i, k) {
        x = x * (n-i) % MOD;
        y = y * (i+1) % MOD;
    }
    return x * mypow(y, MOD - 2) % MOD;
}

#define INF 1e8

int partition(vector<pair<string, int>> &a, int p, int r) {
    int x = a[r].second;
    int i = p-1;
    FOR(j, p, r) {
        if(a[j].second <= x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quicksort(vector<pair<string, int>> &a, int p, int r) {
    // cerr << p << " " << r << endl;
    if(p < r) {
        int q = partition(a, p, r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    }
}

int partitiont(vector<tuple<string, int, int>> &a, int p, int r) {
    int x = get<1>(a[r]);
    int idx = get<2>(a[r]);
    int i = p-1;
    FOR(j, p, r) {
        if(get<1>(a[j]) < x) {
            i++;
            swap(a[i], a[j]);
        } else if(get<1>(a[j]) == x && get<2>(a[j]) < idx) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quicksortt(vector<tuple<string, int, int>> &a, int p, int r) {
    if(p < r) {
        int q = partitiont(a, p, r);
        quicksortt(a, p, q-1);
        quicksortt(a, q+1, r);
    }
}

int main(void) {
    cin.tie(0); ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<string, int>> a(n, pair<string, int>("", 0));
    REP(i, n) cin >> a[i].first >> a[i].second;
    vector<tuple<string, int, int>> b(n);
    REP(i, n) b[i] = make_tuple(a[i].first, a[i].second, i);
    quicksort(a, 0, n-1);
    quicksortt(b, 0, n-1);
    bool flg = true;
    REP(i, n) {
        if(a[i].first != get<0>(b[i]) || a[i].second != get<1>(b[i])) {
            flg = false;
            break;
        }
    }
    cout << (flg ? "Stable" : "Not stable") << endl;
    REP(i, n) cout << a[i].first << " " << a[i].second << endl;
    // REP(i, n) cerr << get<0>(b[i]) << " " << get<1>(b[i]) << endl;
}
