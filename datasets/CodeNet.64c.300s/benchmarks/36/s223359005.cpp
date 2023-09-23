#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>

using namespace std;

int main() {
	int a,b,c;
	int x[3];
	cin >> a >> b >> c;
	x[0] = min(a, min(b, c));
	x[2] = max(a, max(b, c));
	x[1] = a + b + c - x[0] - x[2];
	cout << x[0] <<' '<< x[1] <<' '<< x[2] << endl;
}