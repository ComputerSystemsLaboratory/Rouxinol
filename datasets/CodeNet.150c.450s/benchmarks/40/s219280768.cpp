#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int>a(6);
	for (int b = 0; b < 6; b++) {
		int c;
		cin >> c;
		a[b] = c;
	}
	string d;
	cin >> d;
	for (int e = 0; e < d.length(); e++) {
		vector<int>f(6);
		for (int b = 0; b < 6; b++) {
			f[b] = a[b];
		}
		switch (d[e]) {
		case 'N':a[0] = f[1]; a[1] = f[5]; a[4] = f[0]; a[5] = f[4]; break;
		case 'S':a[1] = f[0]; a[5] = f[1]; a[0] = f[4]; a[4] = f[5]; break;
		case 'E':a[0] = f[3]; a[2] = f[0]; a[3] = f[5]; a[5] = f[2]; break;
		case 'W':a[3] = f[0]; a[0] = f[2]; a[5] = f[3]; a[2] = f[5]; break;
		}
	}
	cout << a[0] << endl;
}