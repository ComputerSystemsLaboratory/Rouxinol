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
constexpr int INF = 2147483647;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr double HDINF = 50000000000000000.0;
constexpr long long LINF = 9223372036854775807;
constexpr long long HLINF = 4500000000000000000;
const double PI = acos(-1);
int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
template <typename T_char>T_char TL(T_char cX) { return tolower(cX); };
template <typename T_char>T_char TU(T_char cX) { return toupper(cX); };
# define ALL(x)      (x).begin(),(x).end()
# define UNIQ(c)     (c).erase(unique(ALL((c))),(c).end())
# define LOWER(s)    transform(ALL((s)),(s).begin(),TL<char>)
# define UPPER(s)    transform(ALL((s)),(s).begin(),TU<char>)
# define mp          make_pair
# define eb          emplace_back
# define FOR(i,a,b)  for(LL i=(a);i<(b);i++)
# define RFOR(i,a,b) for(LL i=(a);i>=(b);i--)
# define REP(i,n)    FOR(i,0,n)
# define INIT        std::ios::sync_with_stdio(false);std::cin.tie(0)


int N, S;
int ans;

void dfs(int s, int i, int cnt) {
	if (cnt == N&& s == S) {
		ans++;
		return;
	}
	else if (cnt == N || s > S||i==10){
		return;
	}
	else {
		dfs(s + i, i + 1, cnt + 1);
		dfs(s, i + 1, cnt);
	}
}

int main() {
	while (cin >> N >> S && (N != 0 || S != 0)) {
		ans = 0;
		dfs(0, 0, 0);
		cout << ans << endl;
	}
}
