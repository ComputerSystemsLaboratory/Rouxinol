#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

void answer()
{
	int n, b, f, r, v;
	int map[8][4][16] = { 0 };
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;

		map[b][f][r] += v;
	}

	for (b = 1; b <= 4; b++) {
		if (b != 1) cout << "####################" << endl;
		for (f = 1; f <= 3; f++) {
			for (r = 1; r <= 10; r++) {
				cout << " " << map[b][f][r];
			}
			cout << endl;
		}
	}
}

int main()
{
	answer();
	return 0;
}