#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
int main() {
	int n;
	long double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> n;
	for (int z = 0; z < n; z++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if((y2-y1)/(x2-x1)==(y4-y3)/(x4-x3)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}