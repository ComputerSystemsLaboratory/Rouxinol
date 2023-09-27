#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;






int main()
{
	int n;
	int tmax;
	int a[1000], b[1000], c[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}
	for (int i = 0 ; i < n; i++) {
		tmax = max({ a[i], b[i], c[i] });
		if (tmax == a[i]) {
			if (a[i] * a[i] == b[i] * b[i] + c[i] * c[i]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if (tmax == b[i]) {
			if (b[i] * b[i] == a[i] * a[i] + c[i] * c[i]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if (tmax == c[i]) {
			if (c[i] * c[i] == b[i] * b[i] + a[i] * a[i]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

	
}