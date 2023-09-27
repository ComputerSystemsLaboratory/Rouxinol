#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<bool> ex(52, true);
	char v;
	int n, c;
	cin >> n;
	while (n--) {
		cin >> v >> c;
		switch (v)
		{
		case 'H':
			c += 13;
			break;
		case 'C':
			c += 26;
			break;
		case 'D':
			c += 39;
			break;
		default:
			break;
		}
		ex[c - 1] = false;
	}
	for (int i = 0; i < 52; i++) {
		if (ex[i]) {
			switch (i / 13)
			{
			case 0:
				cout << "S " << i % 13 + 1 << endl;
				break;
			case 1:
				cout << "H " << i % 13 + 1 << endl;
				break;
			case 2:
				cout << "C " << i % 13 + 1 << endl;
				break;
			case 3:
				cout << "D " << i % 13 + 1 << endl;
				break;
			default:
				break;
			}
		}
	}
	return 0;
}