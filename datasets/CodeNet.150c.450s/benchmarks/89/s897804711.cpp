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
#define lim 1000000
bool primes[lim];
class Solve {
public:
    void input() {

    }

    void solve() {
        input();
        int a, d, n;
        cin >> a >> d >> n;
        if(a == 0) return;

        int cnt = 0;
        int val = a;
        while(true){
            if(primes[val]){
                cnt++;
            }
            if(cnt >= n) break;
            val += d;
        }

        cout << val << endl;
        solve();
    }
};


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    for(int i = 2; i < lim; ++i){
        primes[i] = true;
    }
    for(int i = 2; i < lim; ++i){
        if(primes[i]){
            for(int j = i * 2; j < lim; j += i){
                primes[j] = false;
            }
        }
    }
    Solve().solve();


    return 0;
}

