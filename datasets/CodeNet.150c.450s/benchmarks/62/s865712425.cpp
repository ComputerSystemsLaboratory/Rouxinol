#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> x(3);
	x[0] = a; x[1] = b; x[2] = c;
	sort(x.begin(), x.end());
	cout << x[0] << " " << x[1] << " " << x[2] << endl;
	return 0;
}
