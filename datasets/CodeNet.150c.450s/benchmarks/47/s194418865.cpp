#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <functional>
#define rep(i,n) for (int i=0;i<(n);i++)

using namespace std;

int main(){
	int w, h, x, y, r;
	string str = "No";
	vector<int> vi;

	cin >> w >> h >> x >> y >> r;
	if (0 <= x - r && x + r <= w && 0 <= y - r && y + r <= h) str = "Yes";
	
		cout << str << endl;
	return 0;
}