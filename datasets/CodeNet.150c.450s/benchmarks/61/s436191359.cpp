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
class Solve {
public:
    void input() {

    }

    bool solve() {
        input();
        int N, A, B, C, X;
        cin >> N >> A >> B >> C >> X;
        if (N == 0) return false;
        vector<int> Y(N);
        for (int i = 0; i < N; ++i) {
            cin >> Y[i];
        }

        int cnt = 0;
        int lim = 10000;

        for (int i = 0; i < N && cnt <= lim; ++i) {
            bool force = i > 0;
            while ( (Y[i] != X && cnt <= lim) || force) {
                cnt++;
                X = (X * A + B) % C;
                force = false;
            }
        }
        if (cnt > lim) cout << -1 << endl;
        else cout << cnt << endl;
        return true;
    }

};


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);


    while (Solve().solve()) {};


    return 0;
}

