#include <iostream>
#include <string>
using namespace std;

int main() {
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;

	string ans;
	if(x + r > w || y + r > h) ans = "No";
	else if(x < r || y < r) ans = "No";
	else ans = "Yes";

	cout << ans << endl;
}