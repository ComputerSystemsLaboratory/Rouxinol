# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <tuple>
# include <unordered_map>
# include <numeric>
# include <complex>
# include <bitset>
# include <random>
# include <chrono>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
typedef pair<LL, LL> P;
constexpr int INF = 2000000000;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr long long LINF = 9223372036854775807;
constexpr long long HLINF = 4500000000000000000;
const double PI = acos(-1);
int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
# define ALL(x)      (x).begin(),(x).end()
# define UNIQ(c)     (c).erase(unique(ALL((c))),(c).end())
# define mp          make_pair
# define eb          emplace_back
# define FOR(i,a,b)  for(int i=(a);i<(b);i++)
# define RFOR(i,a,b) for(int i=(a);i>=(b);i--)
# define REP(i,n)    FOR(i,0,n)
# define INIT        std::ios::sync_with_stdio(false);std::cin.tie(0)

list<int> li;

int n, num;
string s;

int main() {
	cin >> n;
	REP(i, n) {
		cin >> s;
		if (s == "insert")cin>>num,li.push_front(num);
		else if (s == "delete") {
			cin >> num;
			for (auto t = li.begin(); t != li.end(); t++) {
				if (*t == num) {
					li.erase(t);
					break;
				}
			}
		}
		else if (s == "deleteFirst")li.pop_front();
		else if (s == "deleteLast")li.pop_back();
	}
	int i = 0;
	for (auto t = li.begin(); t != li.end(); t++) {
		if (i++)cout << " ";
		cout << *t;
	}
	cout << endl;
}

