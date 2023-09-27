#include<iostream>
#include <climits>
#include<vector>
#include<list>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

ll pow_int(int x, int y){
	ll res = 1;
	for (int i = 1;i <= y;i++) res *= x;
	return res;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	ll n;
	cin >> n;
	map<string,int> map;
	REP(i, n) {
		string meirei, str;
		cin >> meirei >> str;
		if (meirei[0] == 'i') map[str] = 1;
		else if (map[str] == 1) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}
