#include<iostream>
#include<string>
using namespace std;

int main() {
	string num;
	while (cin >> num && num != "0") {

		int sum = 0;
		for (int i = 0; i < num.size(); ++i) {
			sum += num[i] - '0';
		}
		cout << sum << endl;
	}

	return 0;
}