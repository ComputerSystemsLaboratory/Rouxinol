#include <string>
#include <iostream>
using namespace std;

int main() {
	while(1) {
		int res = 0;
		string in;
		cin >> in;

		if (in == "0")
			break;

		for (int i = 0; i < in.size(); i++)
			res += in[i] - '0';

		cout << res << endl;
	}

	return 0;
}