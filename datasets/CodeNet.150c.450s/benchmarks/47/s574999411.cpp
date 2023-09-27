#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	
	if(r <= x && x <= W - r && r <= y && y <= H - r) cout << "Yes" << "\n";
	else cout << "No" << "\n";

	return 0;
}