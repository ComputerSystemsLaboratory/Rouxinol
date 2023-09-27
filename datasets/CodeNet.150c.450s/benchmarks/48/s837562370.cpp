#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <cmath>

using namespace std;

int count = 0; // ?¨???¬??¨ global ?????°
int solve(int E) {
	::count = 0;
	int ans = numeric_limits<int>::max(); // ?????§???
	for (int y=0; y*y<=E; ++y){
		for (int z=0; z*z*z<=E; ++z){
			++::count;
			int x = (int)round(E-y*y-z*z*z);
			if (x+y*y+z*z*z == E && x >= 0)
				ans = min(ans, x+y+z);
		}
	}
	return ans;
}
int main() {
	int E;
	while (cin >> E && E>0) {
		cout << solve(E) << endl;
		// cout << "case: m = " << E << " count: " << ::count << endl;
	}
}