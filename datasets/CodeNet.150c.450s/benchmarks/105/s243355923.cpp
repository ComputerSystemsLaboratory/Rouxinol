#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <bitset>
#include <complex>
#include <unistd.h>
#include <cassert>
#include <cctype>
#include <random>
#include <time.h>
#include <functional>
#define _USE_MATH_DEFINES
#define _GLIBCXX_DEBUG
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> plglg;
typedef pair<double, ll> pdlg;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlglglg;
typedef tuple<ll, ll, ll, ll> tlglglglg;
typedef tuple<double, double, double> tddd;
typedef complex<double> xy_t;
typedef vector<ll> vll;
typedef vector< vector<ll> > matrix;
typedef unsigned int uint;
typedef unsigned long long ull;
template <class T> using V = vector<T>;
template <class T> using VV = V<V<T>>;
template <class T> using VVV = V<VV<T>>;
#define REP(i, x, y) for(ll i = (ll)x; i < (ll)y; i++)
#define DREP(i, x, y, d) for(ll i = (ll)x; i < (ll)y; i += (ll)d)
#define PER(i, x, y) for(ll i = (ll)x; i > (ll)y; i--)
#define DPER(i, x, y, d) for(ll i = (ll)x; i > (ll)y; i -= (ll)d)
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
double pi = 3.141592653589793;
ll mod = 1000000007;
int intmax = 2147483647;
int intmin = -2147483648;
ll llmax = 9223372036854775807;
ll llmin = -9223372036854775807;
int iinf = intmax / 8;
ll inf = llmax / 8;
double eps = 1e-12;
void yesno(bool ok, string yes = "Yes", string no = "No") {
    if (ok) {
        cout << yes << endl;
    } else {
        cout << no << endl;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll T;
    cin >> T;
    REP(i, 0, T) {
        ll N;
        cin >> N;
        ll A[N];
        REP(i, 0, N) {
            cin >> A[i];
        }
        string S;
        cin >> S;
        bool ok = true;
        REP(i, 0, N) {
            if (S[i] == '1') {
                ll target = A[i];
                vll vec;
                REP(j, i + 1, N) {
                    if (S[j] == '0') {
                        vec.push_back(A[j]);
                    }
                }
                sort(vec.begin(), vec.end());
                reverse(vec.begin(), vec.end());
                ll len = vec.size();
                ll tmp = 0;
                ll bo[65];
                fill(bo, bo + 65, -1);
                PER(keta, 62, -1) {
                    bool tmpok = false;
                    REP(j, tmp, len) {
                        if (vec[j] & (1LL << keta)) {
                            swap(vec[j], vec[tmp]);
                            bo[keta] = tmp;
                            tmpok = true;
                            break;
                        }
                    }
                    if (tmpok) {
                        REP(j, 0, len) {
                            if (j == tmp) {
                                continue;
                            }
                            if (vec[tmp] & vec[j] & (1LL << keta)) {
                                vec[j] = vec[j] ^ vec[tmp];
                            }
                        }
                        tmp++;
                    }
                }
                PER(keta, 62, -1) {
                    if (target & (1LL << keta)) {
                        if (bo[keta] == -1) {
                            // cout << keta << " aaa" << endl;
                            ok = false;
                            break;
                        }
                        target ^= vec[bo[keta]];
                    }
                }
            }
        }
        if (ok) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
}
