#include<iostream>
using namespace std;

int main(void) {
	char num[1000][1010];
	int jump;
	int outnum[100] = {};

	for (int i = 1; i <= 2000; i++) {
		cin >> num[i];
		if (num[i][0] == '0') {
			jump = i;
			break;
		}
	}
	for (int t = 1; t < jump; t++) {
		for (int u = 0; u <= 2000; u++) {
			if (num[t][u] == '\0') {
				cout << outnum[t] << "\n";
				break;
			}
			outnum[t] += num[t][u]-48;
		}
	}
	return 0;
}