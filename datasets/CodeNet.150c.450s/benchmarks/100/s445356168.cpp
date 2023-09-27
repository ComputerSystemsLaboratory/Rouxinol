#include<iostream>
#include<string>
#include<vector>
using namespace std;

unsigned long long Kaijo(int n) {
	long long int m;
	if (n == 0)
		return 1;
	m = Kaijo(n - 1);
	return m*n;
}

int main() {
	int n;
	cin >> n;
	cout << Kaijo(n) << endl;
	return 0;
}