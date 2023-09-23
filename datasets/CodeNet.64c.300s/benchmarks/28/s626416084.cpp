#include<iostream>
#include<vector>
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


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int x, y, W, H, r;
	cin >> W >> H >> x >> y >> r;
	if (x - r >= 0 && x + r <= W&&y - r >= 0 && y + r <= H) {
		cout << "Yes\n";
	}
	else cout << "No\n";

	return 0;
}
