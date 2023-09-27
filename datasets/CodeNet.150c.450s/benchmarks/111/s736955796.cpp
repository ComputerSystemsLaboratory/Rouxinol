#include<iostream>
#include<vector>
#include<string>
#define int long long
using namespace std;

signed main() {
	vector<int>l(21);
	vector<int>r(21);
	int a;
	cin >> a;
	vector<int>b(a-1);
	int s;
	for (int c = 0; c < a - 1; c++) {
		cin >>b[c];
	}
	cin >> s;
	l[b[0]]++;
	for (int  d = 1; d < a - 1; d++) {
		for (int e = 0; e < 21; e++) {
			if (e + b[d] < 21)r[e + b[d]] += l[e];
			if (e - b[d] > -1)r[e - b[d]] += l[e];
		}
		for (int p = 0; p < 21; p++) {
			l[p] = r[p];
			r[p] = 0;
		}
	}
	cout << l[s] << endl;
}