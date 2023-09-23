#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <sstream>
#include <cstdio>
#include <stack>
using namespace std;

// Integral(0014)
int main()
{
	int d;
	while (cin >> d) {
		long long int s = 0;
		for (int i = 0; i+d < 600+1; i += d)
			s += (d * i * i);
		cout << s << endl;
	}
	return 0;
}