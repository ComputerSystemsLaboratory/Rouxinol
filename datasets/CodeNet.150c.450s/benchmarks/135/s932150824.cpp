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

#define rep(i, m, n) for(int i=int(m);i<int(n);i++)
#define EACH(i, c) for (auto &(i): c)
#define all(c) begin(c),end(c)
#define EXIST(s, e) ((s).find(e)!=(s).end())
#define SORT(c) sort(begin(c),end(c))
#define pb emplace_back
#define MP make_pair
#define SZ(a) int((a).size())

//#define LOCAL 0
//#ifdef LOCAL
//#define DEBUG(s) cout << (s) << endl
//#define dump(x)  cerr << #x << " = " << (x) << endl
//#define BR cout << endl;
//#else
//#define DEBUG(s) do{}while(0)
//#define dump(x) do{}while(0)
//#define BR
//#endif


//改造
typedef long long int ll;
using namespace std;
#define INF (1 << 30)
#define INFl (ll)5e15
#define DEBUG 0 //デバッグする時1にしてね
#define dump(x)  cerr << #x << " = " << (x) << endl
#define MOD 1000000007
//ここから編集する

void solve(int n, int m) {
    vector<int> h, w, sh, sw;
    sh.push_back(0);
    sw.push_back(0);
    rep(i, 0, n) {
        int tmp;
        cin >> tmp;
        h.push_back(tmp);
        if (sh.size() == 0) sh.push_back(tmp);
        else sh.push_back(sh.back() + tmp);
    }
    rep(i, 0, m) {
        int tmp;
        cin >> tmp;
        w.push_back(tmp);
        if (sw.size() == 0) sw.push_back(tmp);
        else sw.push_back(sw.back() + tmp);
    }
    map<int, int> mph, mpw;
    for (int i = 0; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            mph[sh[j] - sh[i]]++;
        }
    }
    for (int i = 0; i <= m; i++) {
        for (int j = i + 1; j <= m; j++) {
            mpw[sw[j] - sw[i]]++;
        }
    }
    ll ans = 0;
    for(auto it : mph){
        if(mpw.find(it.first) != mpw.end()){
            ans += it.second * mpw[it.first];
        }
    }
    cout << ans << endl;


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0) break;
        solve(n, m);
    }


    return 0;
}

