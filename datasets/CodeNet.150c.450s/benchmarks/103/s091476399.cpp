#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <utility>
#include <numeric>
#include <string>
#include <set>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#define rep(i, a, n) for(int (i) = (int)(a);(i) < (int)(n);++(i))
#define repe(i, a, n) for(int (i) = (int)(a);(i) <= (int)(n);++(i))
#define repr(i, a, n) for(int (i) = (int)(a);(i) > (int)(n);--(i))
#define reper(i, a, n) for(int (i) = (int)(a);(i) >= (int)(n);--(i))
#define SIZE(x) ((int)(x).size())
#define ALL(x) (x).begin(), (x).end()
#define RNG(x, n) &((x)[0]), &((x)[n])
#define SUBIF(a, b, x) ((x) ? (b) : (a))
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define pb push_back
#define EPS (1e-20)
#define INF 2147483647LL
#define MOD 1000000007LL
using llint = long long;
using VI = std::vector<int>;
using PII = std::pair<int, int>;
using SI = std::set<int>;
using MII = std::map<int, int>;
using TIII = std::tuple<int, int, int>;
using namespace std;


int n, s;


int cntBit(int bit){
	int cnt = 0;
	do {
		cnt += bit&1;
	} while(bit/=2);
	return cnt;
}


VI enumComb(){
	VI comb;
	rep(i, 0, 1<<10)
		if(cntBit(i) == n) comb.pb(i);
	return comb;
}


int solve(){
	int ans = 0;
	VI comb = enumComb();
	for(int x : comb){
		int sum = 0;
		repe(i, 0, 9)
			if((x>>i)&1) sum += i;
		if(sum == s) ans++;
	}
	return ans;
}


int main(){
	while(cin >> n >> s, n || s) cout << solve() << endl;

	return 0;
}
