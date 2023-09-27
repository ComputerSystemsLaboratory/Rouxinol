#include <iostream>
#include <cstdio>
using namespace std;
const int M = 100000;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int count = 0;
	for (int i = a; i <= b; i++) {
		if (c%i == 0) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}