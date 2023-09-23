#include<iostream>
using namespace std;
int main() {
	int N,a,b,c;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a >> b >> c;
		if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}