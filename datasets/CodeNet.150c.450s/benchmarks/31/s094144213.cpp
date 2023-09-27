#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

typedef long long LL;
const int MAX_N = 200100;
const LL INF = 1 << 30;
LL nmin[MAX_N];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	LL ans = -INF;
	for(int i = 0; i < n; ++i){
		LL r;
		cin >> r;
		if(i == 0){
			nmin[0] = r;
		}
		else {
			ans = max(ans, r - nmin[i - 1]);
			nmin[i] = min(nmin[i - 1], r);
		}
	}

	cout << ans << endl;

	return 0;
}