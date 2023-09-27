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

int main() {
	stack<int> s1;
	stack<pair<int, int>>s2;
	string s;
	cin >> s;
	int sum = 0;
	REP(i, s.size()) {
		if (s[i] == '\\')s1.push(i);
		else if (s[i] == '/'&&s1.size()) {
			int j = s1.top();
			s1.pop();
			sum += (i - j);
			int a = (i - j);
			while (s2.size() && s2.top().first > j) {
				a += s2.top().second;
				s2.pop();
			}
			s2.push(mp(j, a));
		}
	}
	vector<int> v;
	while (s2.size()) {
		v.emplace_back(s2.top().second);
		s2.pop();
	}
	reverse(ALL(v));
	cout << sum << endl << v.size();
	REP(k, v.size()) {
		cout << " ";
		cout << v[k];
	}
	cout << endl;
}
