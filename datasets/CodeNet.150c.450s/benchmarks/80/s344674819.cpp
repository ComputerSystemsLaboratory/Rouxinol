#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	cout  << max(a + b + c + d, e + f + g + h) << endl;
}
