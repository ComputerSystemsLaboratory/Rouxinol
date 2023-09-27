
#include <bits/stdc++.h>

using namespace std;

/* g++ -g -fsanitize=address -lasan -std=c++11 -Dfoo_ */

/* freopen("input.txt", "rt", stdin); */
/* freopen("output.txt", "wt", stdout); */

#define ALL(c)          (c).begin(), (c).end()
#define ALLR(c)         (c).rbegin(), (c).rend()
#define FOR(i,a,b)      for (int i=(a); i < (b); ++i)
#define FORR(i,a,b)     for (int i=(a); i > (b); --i)
#define FOR_ALL(i,c)    for (__typeof((c).begin()) i=(c).begin();   \
                             i != (c).end(); ++i)
#define FOR_ALLR(i,c)   for (__typeof((c).rbegin()) i=(c).rbegin(); \
                             i != (c).rend(); ++i)
#define SZ(array)       (sizeof(array)/sizeof(array[0]))
#define lc(x)           (x<<1)     /* 2*x */
#define rc(x)           (x<<1 | 1) /* 2*x+1 */
#define lowbit(x)       (x & (-x)) /* 0b10100 -> 0b100 */

typedef long long       LL;
typedef map<int,int>    MII;
typedef pair<int,int>   PII;
typedef set<int>        SI;
typedef vector<bool>    VB;
typedef vector<double>  VD;
typedef vector<int>     VI;
typedef vector<string>  VS;

/* check if a key is in container C */
template <class C>
inline bool in_(const typename C::key_type& k, const C& A)
{ return A.find(k) != A.end(); }
inline bool in_(const string& s, const string& S)
{ return S.find(s) != string::npos; }

int main()
{
#ifdef foo_
    freopen("foo", "rt", stdin);
#endif
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        map<int,int> cnt; LL sum = 0;
        FOR(i,0,n) {
            int a; cin >> a; sum += a; cnt[a]++;
        }
        int q; cin >> q;
        FOR(_,0,q) {
            int b,c; cin >> b >> c;
            const LL x = cnt[b];
            sum -= b*x; cnt[b] = 0;
            sum += c*x; cnt[c] += x;
            cout << sum << endl;
        }
    }
    return 0;
}
