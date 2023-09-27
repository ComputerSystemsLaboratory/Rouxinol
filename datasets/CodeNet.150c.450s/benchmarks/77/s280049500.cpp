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
    int N;
    cin >> N;
    if (N == 0) return false;
    vector<vector<int> > field(25, vector<int>(25, 0));
    vector<vector<int> > used(25, vector<int>(25, 0));
    int cx = 10, cy = 10;
    used[cx][cy] = 1;
    rep(i, 0, N) {
        int x, y;
        cin >> x >> y;
        field[x][y] = 1;
    }
    int M;
    cin >> M;
    char dir[4] = {'N', 'S', 'W', 'E'};
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    rep(i, 0, M) {
        char d;
        cin >> d;
        int l;
        cin >> l;
        rep(j, 0, 4) {
            if (d == dir[j]) {
                rep(k, 0, l) {
                    cx += dx[j];
                    cy += dy[j];
                    used[cx][cy] = 1;
                }
                break;
            }
        }

    }

    rep(x, 0, 25) {
        rep(y, 0, 25) {
            if (field[x][y] == 1 && used[x][y] == 0) {
                cout << "No" << endl;
                return true;
            }
        }
    }
    cout << "Yes" << endl;
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (solve());

    return 0;
}

