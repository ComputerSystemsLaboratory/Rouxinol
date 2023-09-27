#include <cmath>
#include <iostream>
using namespace std;
int n;
int main() {
	cin >> n;
	cout << (long long)tgamma((long double)(n + 1)) << endl;
}