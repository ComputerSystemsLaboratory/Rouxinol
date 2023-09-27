#include <iostream>
using namespace std;
 
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0019

int main() {
	int d;
	cin >> d;
	long long int sum = 1;
	while (d > 1) sum *= d--;
	cout << sum << endl;
	return 0;
}