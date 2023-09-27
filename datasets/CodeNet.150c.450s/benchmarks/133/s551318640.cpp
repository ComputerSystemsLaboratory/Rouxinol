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
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
constexpr ll INF = 1e18;

int main(void) {
    ll D;
    cin >> D;
    vector<ll> c(26);
    vector<vector<ll>> s(D, vector<ll>(26));
    for (int i = 0; i < 26; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < D; i++) {
        for (int j = 0; j < 26; j++) {
            cin >> s[i][j];
        }
    }

    vector<ll> t(D);
    for (int i = 0; i < D; i++) {
        cin >> t[i];
        t[i]--;
    }

    ll v = 0;
    // vector<vector<ll>> last(D, vector<ll>(26));
    vector<ll> last(26);
    for (int day = 0; day < D; day++) {
        v += s[day][t[day]];
        last[t[day]] = day+1;
        for (int i = 0; i < 26; i++) {
            v -= c[i] * (day+1 - last[i]);
        }
        cout << v << endl;
    }

    return 0;
}

