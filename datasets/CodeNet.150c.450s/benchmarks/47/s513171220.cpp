// class point	の練習（クラスの高度な実装）
#include <iostream>
using namespace std;



int main() {
	int W, H, x, y, r;
	int ans = 0;

	cin >> W >> H >> x >> y >> r;

	if (x - r<0 || x + r>W)ans = 2;
	if (y - r<0 || y + r>H)ans = 2;

	if (ans)cout << "No\n";
	else cout << "Yes\n";
	
	return 0;
}

