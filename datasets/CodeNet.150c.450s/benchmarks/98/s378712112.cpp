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
//#define EACH(i, c) for (auto &(i): c)
#define all(c) begin(c),end(c)
//#define EXIST(s, e) ((s).find(e)!=(s).end())
//#define SORT(c) sort(begin(c),end(c))
//#define pb emplace_back
//#define MP make_pair
//#define SZ(a) int((a).size())

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
#define INF (1 << 30) - 1
#define INFl (ll)5e15
#define DEBUG 0 //デバッグする時1にしてね
#define dump(x)  cerr << #x << " = " << (x) << endl
#define MOD 1000000007
//ここから編集する

bool solve() {
    int n, m;
    cin >> n >> m;
    if (n == 0) return false;

    vector<int> ta(n), ha(m);
    int sum_ta = 0;
    int sum_ha = 0;
    for (int i = 0; i < n; i++) {
        cin >> ta[i];
        sum_ta += ta[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> ha[i];
        sum_ha += ha[i];
    }

    int min_v = 114514;
    int ans_ta = -1, ans_ha = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int hta = ta[i];
            int hha = ha[j];

            int tmp_ta = sum_ta - hta + hha;
            int tmp_ha = sum_ha - hha + hta;

            if (tmp_ta == tmp_ha) {
                int val = hta + hha;
                if (min_v > val) {
//                    ans_ta = i + 1;
//                    ans_ha = j + 1;
                    ans_ta = hta;
                    ans_ha = hha;
                    min_v = val;
                }
            }
        }
    }

    if (ans_ta == -1) {
        cout << -1 << endl;
    } else {
        cout << ans_ta << " " << ans_ha << endl;
    }
    return true;

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (solve());


    return 0;
}

