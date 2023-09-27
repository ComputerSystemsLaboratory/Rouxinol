#include<iostream>
#include<string>
using namespace std;

int main(){
	int W, H, x, y, r;
	string s;

	cin >> W >> H >> x >> y >> r;

	if (r <= x && r <= y && x <= (W - r) && y <= (H - r))
		s = "Yes";
	else
		s = "No";

	cout << s << endl;
	return 0;
}