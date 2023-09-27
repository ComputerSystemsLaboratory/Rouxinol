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
string rev(string s) {
    reverse(all(s));
    return s;
}

void solve(string s) {
    set<string> set1;
    rep(i, 0, s.size()) {
        string s1 = s.substr(0, i);
        string s2 = s.substr(i, s.size());
        set1.insert(s1 + s2);
        set1.insert(rev(s1) + s2);
        set1.insert(rev(s1) + rev(s2));
        set1.insert(s1 + rev(s2));

        set1.insert(s2 + s1);
        set1.insert(rev(s2) + s1);
        set1.insert(rev(s2) + rev(s1));
        set1.insert(s2 + rev(s1));
    }
//    cout << "case " << s << endl;
//    for (auto e : set1) {
//        cout << e << endl;
//    }

    cout << set1.size() << endl;
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);


    int n;
    cin >> n;
    rep(i, 0, n) {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}

