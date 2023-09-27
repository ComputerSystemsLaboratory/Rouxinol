#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true) {
		int n;
		cin >> n;

		if (n == 0) {
			break;
		}

		int count = 0;
		bool leftdown = true;
		bool rightdown = true;
		bool up = false;

		for (int i = 0; i < n; i++) {
			string str;
			cin >> str;

			if (str == "lu") {
				leftdown = false;
				if (up == false && rightdown == false) {
					up = true;
					count++;
				}
			}
			else if (str == "ru") {
				rightdown = false;
				if (up == false && leftdown == false) {
					up = true;
					count++;
				}
			}
			else if (str == "ld") {
				leftdown = true;
				if (up == true && rightdown == true) {
					up = false;
					count++;
				}
			}
			else {
				rightdown = true;
				if (up == true && leftdown == true) {
					up = false;
					count++;
				}
			}
		}

		cout << count << endl;
	}
	
	return 0;
}