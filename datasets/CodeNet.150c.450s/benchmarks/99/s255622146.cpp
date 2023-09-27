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
#include <cassert>


using namespace std;
#define SZ(x) (int)(x.size())
#define REP(i, n) for(int i=0;i<n;++i)
#define FOR(i, a, b) for(int i=a;i<b;++i)
#define RREP(i, n) for(int i=n-1;i>=0;--i)
#define RFOR(i, a, b) for(int i=b-1;i>=a;--i)

#define all(x) begin(x),end(x)
#define dump(x) cerr<<#x<<" = "<<(x)<<endl
#define debug(x) cerr<<#x<<" = "<<(x)<<" (L"<<__LINE__<<")"<< endl;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using P = pair<int, int>;
const double eps = 1e-8;
const ll MOD = 1000000007;
const int INF = INT_MAX / 2;
const ll LINF = LLONG_MAX / 2;

template<class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}


template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> p) {
    os << p.first << ":" << p.second;
    return os;
}

template<class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    os << "[";
    REP(i, SZ(v)) {
        if (i) os << ", ";
        os << v[i];
    }
    return os << "]";
}

template<class T1, class T2>
ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
    os << "[";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if (it != mp.begin()) {
            os << ", ";
        }
        os << *it;
    }
    return os << "]";
}

// edit

int conv(string s) {
    int ret = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'm') {
            if (i == 0 || !isdigit(s[i - 1])) {
                ret += 1000;
            } else {
                ret += 1000 * (s[i - 1] - '0');
            }
        } else if (s[i] == 'c') {
            if (i == 0 || !isdigit(s[i - 1])) {
                ret += 100;
            } else {
                ret += 100 * (s[i - 1] - '0');
            }
        } else if (s[i] == 'x') {
            if (i == 0 || !isdigit(s[i - 1])) {
                ret += 10;
            } else {
                ret += 10 * (s[i - 1] - '0');
            }
        } else if (s[i] == 'i') {
            if (i == 0 || !isdigit(s[i - 1])) {
                ret += 1;
            } else {
                ret += 1 * (s[i - 1] - '0');
            }
        }
    }
    return ret;
}

string rconv(int v) {
    string ret;

    {
        int d = v / 1000 % 10;
        if (d == 0) {

        } else if (d == 1) {
            ret += 'm';
        } else {
            ret += d + '0';
            ret += 'm';
        }
    }

    {
        int d = v / 100 % 10;
        if (d == 0) {

        } else if (d == 1) {
            ret += 'c';
        } else {
            ret += d + '0';
            ret += 'c';
        }
    }

    {
        int d = v / 10 % 10;
        if (d == 0) {

        } else if (d == 1) {
            ret += 'x';
        } else {
            ret += d + '0';
            ret += 'x';
        }
    }

    {
        int d = v / 1 % 10;
        if (d == 0) {

        } else if (d == 1) {
            ret += 'i';
        } else {
            ret += d + '0';
            ret += 'i';
        }
    }

    return ret;
}

void solve() {

    string s, t;
    cin >> s >> t;
    int sv = conv(s);
    int tv = conv(t);
    int val = sv + tv;

    string ans = rconv(val);
    cout << ans << endl;

}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);
//    std::ifstream in("input.txt");
//    std::cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;
    REP(i, n)solve();

//    while (true) {
//        string s;
//        cin >> s;
//        cout << conv(s) << endl;
//    }
    return 0;
}

