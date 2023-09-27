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
    REP(i, SIZE(vv)) {
        REP(j, SIZE(vv[i])) {
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
T gcd(T a, T b) {
    if(a > b) swap(a, b);
    if(a == 0) return b;
    else return gcd(b%a, a);
}

template<typename T>
T lcm(T a, T b) {
    return (a / gcd(a, b)) * b;
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
#define SZ 86405

int main(void) {
    while(1) {
        int n;
        cin >> n;
        if(n == 0) return 0;
        VI cnt(SZ, 0);
        REP(i, n) {
            string s, t;
            cin >> s >> t;
            int start = 0, end = 0;
            start += stoi(s.substr(0, 2)) * 3600;
            start += stoi(s.substr(3, 2)) * 60;
            start += stoi(s.substr(6, 2));
            end += stoi(t.substr(0, 2)) * 3600;
            end += stoi(t.substr(3, 2)) * 60;
            end += stoi(t.substr(6, 2));
            cnt[start]++;
            cnt[end]--;
        }
        FOR(i, 1, SZ) cnt[i] += cnt[i-1];
        int ans = 0;
        REP(i, SZ) ans = max(ans, cnt[i]);
        cout << ans << endl;
    }
}
