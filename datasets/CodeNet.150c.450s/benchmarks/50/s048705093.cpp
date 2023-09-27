#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int main()
{
	int a, b, c, d, e, i, j, k, l, m, n, o, p, q, r;
	while (1){
		cin >> a;
		if (a == 0){ break; }
		c = 0;
		a = 1000 - a;
		b = a;
		b = a / 500;
		c = c + b;
		a = a % 500;
		b = a / 100;
		c = c + b;
		a = a % 100;
		b = a / 50;
		c = c + b;
		a = a % 50;
		b = a / 10;
		c = c + b;
		a = a % 10;
		b = a / 5;
		c = c + b;
		a = a % 5;
		b = a;
		c = c + b;
		cout << c << endl;
		a = 0;
		b = 0;
		c = 0;
	}
	return 0;
}