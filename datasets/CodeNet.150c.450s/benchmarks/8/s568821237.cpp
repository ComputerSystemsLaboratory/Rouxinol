#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int taroScore = 0, hanaScore = 0;
	string taro, hana;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> taro >> hana;
		if (taro == hana) {
			taroScore += 1;
			hanaScore += 1;
		}
		else if (taro > hana) taroScore += 3;
		else if (taro < hana) hanaScore += 3;
	}
	cout << taroScore << " " << hanaScore << endl;
	return 0;
}