#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

int s_to_i(char c)
{
	switch (c) {
	case 'S':
		return 0;
	case 'H':
		return 1;
	case 'C':
		return 2;
	case 'D':
		return 3;
	}
	return -1;
}

char i_to_s(int n)
{
	switch (n) {
	case 0:
		return 'S';
	case 1:
		return 'H';
	case 2:
		return 'C';
	case 3:
		return 'D';
	}
	return 0;
}

void answer()
{
	int n, rank;
	char c;
	bool a[4][16] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c >> rank;
		a[s_to_i(c)][rank] = true;
	}
	for (int s = 0; s < 4; s++) {
		for (int i = 1; i <= 13; i++) {
			if (!a[s][i]) cout << i_to_s(s) << " " << i << endl;
		}
	}
}

int main()
{
	answer();
	return 0;
}