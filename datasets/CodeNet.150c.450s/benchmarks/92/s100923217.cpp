#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int a, b;
	while (cin >> a >> b) cout << (int)log10 (a + b) + 1 << endl;
}