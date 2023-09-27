#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
const int num = 45;
int f[num];
inline int getNumber(int i) {
	if (i == 0 || i == 1)
		return 1;
	int j;
	for (j = 2; j <= i; j++) {
		f[j] = f[j - 1] + f[j - 2];
	}
	j--;
	return f[j];
}
int main() {
	int n;
	cin >> n;
	f[0] = 1;
	f[1] = 1;
	int x = getNumber(n);
	cout << x << endl;
	return 0;
}