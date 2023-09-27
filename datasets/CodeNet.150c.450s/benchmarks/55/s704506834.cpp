#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	string x;
	char tmp;
	int sum;

	cin >> x;

	while(x != "0") {
		sum = 0;

		for(int i = 0;i < x.size();i++) {
			tmp = x[i];

			sum += atoi(&tmp);
		}

		cout << sum << endl;
		cin >> x;
	}

	return 0;
}