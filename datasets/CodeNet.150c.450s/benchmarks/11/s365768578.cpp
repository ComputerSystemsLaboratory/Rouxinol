#include<iostream>

using namespace std;

int main()
{
	int mycards[4][13] = {0};

	int n;
	cin >> n;

	char s;
	int number;
	for (int i = 0; i < n; i++) {
		cin >> s >> number;
		switch (s) {
		case 'S': mycards[0][number - 1] = 1; break;
		case 'H': mycards[1][number - 1] = 1; break;
		case 'C': mycards[2][number - 1] = 1; break;
		case 'D': mycards[3][number - 1] = 1; break;
		}
	}
	
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 13; i++) {
			switch (j) {
			case 0:
				if (mycards[j][i] == 0) cout << "S " << i + 1 << "\n";
				break;
			case 1:
				if (mycards[j][i] == 0) cout << "H " << i + 1 << "\n";
				break;
			case 2:
				if (mycards[j][i] == 0) cout << "C " << i + 1 << "\n";
				break;
			case 3:
				if (mycards[j][i] == 0) cout << "D " << i + 1 << "\n";
				break;
			}
		}
	}
}