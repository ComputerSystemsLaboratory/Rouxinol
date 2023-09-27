#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int b = 0; b < a; b++) {
		unordered_set<string>U;
		string W[73], X[73], Y[73], Z[73],w,x,y,z;
		string c;
		cin >> c;
		for (int d = 0; d < c.length(); d++) {
			w += c[d]; x = c[d] + x;
			W[d + 1] = w; X[d + 1] = x;
		}
		for (int e = c.length() - 1; e != -1; e--) {
			y += c[e]; z = c[e] + z;
			Y[e] = y; Z[e] = z;
		}
		for (int i = 0; i <= c.length(); i++) {
			U.insert(W[i] + Y[i]);
			U.insert(W[i] + Z[i]);
			U.insert(X[i] + Y[i]);
			U.insert(X[i] + Z[i]);
			U.insert(Y[i] + W[i]);
			U.insert(Z[i] + W[i]);
			U.insert(Y[i] + X[i]);
			U.insert(Z[i] + X[i]);
		}
		cout << U.size() << endl;
	}
}