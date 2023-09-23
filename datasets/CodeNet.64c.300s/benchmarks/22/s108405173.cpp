#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0;i < N; i++) {
		int a,b,c;
		cin >> a >> b >> c;
		if (2 * max(max(a,b),c) * max(max(a,b),c) == a*a+b*b+c*c ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}