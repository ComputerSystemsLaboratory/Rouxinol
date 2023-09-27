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

void solve(int n,int m){
    vector<int> v(n);
    rep(i,0,n){
        v[i] = i + 1;
    }
    rep(i,0,m){
        int p,c;
        cin >> p >> c;
        vector<int> tmp1(v.end() - p + 1 ,v.end());
        vector<int> tmp2(v.end() - p + 1 - c,v.end() - p + 1);

        rep(j,0,tmp1.size()){
            v[v.size() - p + 1 - c + j] = tmp1[j];
        }
        rep(j,0,tmp2.size()){
            v[v.size() - p + 1 - c + tmp1.size() + j] = tmp2[j];
        }


    }
    cout << v.back() << endl;

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(true){
        int n,m;
        cin >> n >> m;
        if(n == 0) break;
        solve(n,m);

    }


    return 0;
}

