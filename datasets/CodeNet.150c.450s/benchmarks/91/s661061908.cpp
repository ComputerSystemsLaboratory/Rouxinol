#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<bool>hantei(1000000, true);
	vector<int>sosuu(1000000);
	int s = 0;
	for (int a = 2; a < 1000000; a++) {
		if (hantei[a]) {
			s++;
			for (int b = a * 2; b < 1000000; b += a)hantei[b] = false;
		}
		sosuu[a] = s;
	}
	int c;
	while (cin >> c) {
		cout << sosuu[c] << endl;
	}
}