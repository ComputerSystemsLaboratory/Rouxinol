#include<iostream>

using namespace std;


int main() {
	int n;
	char Taro[1001][101], Hanako[1001][101];
	int TaroPoint = 0, HanakoPoint = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> Taro[i] >> Hanako[i];

		for (int j = 0; j < 101; j++) {
			if (Taro[i][j] > Hanako[i][j]) {
				TaroPoint += 3;
				break;
			}
			else if (Taro[i][j] < Hanako[i][j]) {
				HanakoPoint += 3;
				break;
			}
			if (Taro[i][j] == '\0'&&Hanako[i][j] == '\0') {
				TaroPoint++;
				HanakoPoint++;
				break;
			}
		}
	}

	cout << TaroPoint << " " << HanakoPoint << endl;

	return 0;
}