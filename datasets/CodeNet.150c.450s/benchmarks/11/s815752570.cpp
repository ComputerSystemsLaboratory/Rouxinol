#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, bool> S, H, C, D;
	for (int i = 0; i < n; i++){
		char c;
		int x;
		cin >> c >> x;
		if (c == 'S') S[x] = true;
		else if (c == 'H') H[x] = true;
		else if (c == 'C') C[x] = true;
		else D[x] = true;
	}

	for (int i = 1; i < 14; i++){
		if (!(S[i])) cout << 'S' << " " << i << endl;
	}
	for (int i = 1; i < 14; i++){
		if (!(H[i])) cout << 'H' << " " << i << endl;
	}
	for (int i = 1; i < 14; i++){
		if (!(C[i])) cout << 'C' << " " << i << endl;
	}
	for (int i = 1; i < 14; i++){
		if (!(D[i])) cout << 'D' << " " << i << endl;
	}
}

