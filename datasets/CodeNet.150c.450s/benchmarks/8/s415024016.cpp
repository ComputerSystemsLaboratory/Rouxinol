#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, taroP, hanakoP;
	string taroC, hanakoC;

	taroP = 0;
	hanakoP = 0;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> taroC >> hanakoC;

		if (taroC > hanakoC)
			taroP += 3;
		else if (taroC < hanakoC)
			hanakoP += 3;
		else {
			taroP += 1;
			hanakoP += 1;
		}
	}
	cout << taroP << " " << hanakoP << endl;
	return 0;
}