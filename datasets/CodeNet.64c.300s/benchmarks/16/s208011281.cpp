#include <iostream>
#include <cstdio>
using namespace std;

const int INF = (1e+9) * 2;

int main() {
	int n, r[200001] = {0};
	cin >> n;
	for(int i = 0; i < n; ++i)
		scanf("%d", &r[i]);
	
	int ans = -INF, min_r = r[0];
	for(int i = 1; i < n; ++i){
		ans = max(ans, r[i] - min_r);
		min_r = min(min_r, r[i]);
	}
	cout << ans << endl;
	return 0;
}