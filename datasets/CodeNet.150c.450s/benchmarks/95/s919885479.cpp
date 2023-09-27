#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <climits>
#include <cstring>

#define rep(i, m, n) for(int i=int(m);i<int(n);i++)
#define all(c) begin(c),end(c)

template<typename T1, typename T2>
inline void chmin(T1 &a, T2 b) { if (a > b) a = b; }

template<typename T1, typename T2>
inline void chmax(T1 &a, T2 b) { if (a < b) a = b; }

//改造
typedef long long int ll;
using namespace std;
#define INF (1 << 30) - 1
#define INFl (ll)5e15
#define DEBUG 0 //デバッグする時1にしてね
#define dump(x)  cerr << #x << " = " << (x) << endl
#define MOD 1000000007


//ここから編集する
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    int n;
    cin >> n;
    if(n == 0) return 0;

    vector<string> vs(n);
    rep(i, 0, n) cin >> vs[i];

    int l = 0, r = 0;
    int state = 0;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int nl = l, nr = r, nstate = state;
        if (vs[i] == "lu") {
            nl = 1;
        }
        if (vs[i] == "ld") {
            nl = 0;
        }
        if (vs[i] == "ru") {
            nr = 1;
        }
        if (vs[i] == "rd") {
            nr = 0;
        }
        if(nr == nl){
            nstate = nr;
        }
        if(nstate != state){
            ans++;
        }
        l = nl;
        r = nr;
        state = nstate;
    }
    cout << ans << endl;

    main();
    return 0;
}

