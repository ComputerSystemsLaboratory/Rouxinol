#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string taro, hanako;
	int taro_point = 0;
	int hanako_point = 0;
	for (int i = 0; i < n; i++) {
		cin >> taro >> hanako;
		int flag, len;
		if (taro.length() == hanako.length()) {
			flag = 0;
			len = hanako.length();
		} else if (taro.length() > hanako.length()) {
			flag = 1;
			len = hanako.length();
		} else {
			flag = -1;
			len = taro.length();
		}

		int winner = 0;
		for (int j = 0; j < len; j++) {
			if (taro[j] - 'a' > hanako[j] - 'a') {
				winner = 1;
				break;
			} else if (taro[j] - 'a' < hanako[j] - 'a') {
				winner = -1;
				break;
			}
		}
		if (winner == 0)
			winner = flag;

		if (winner == 1) {
			taro_point += 3;
		} else if (winner == -1) {
			hanako_point += 3;
		} else {
			taro_point += 1;
			hanako_point += 1;
		}
	}
	cout << taro_point << " " << hanako_point << endl;

	return 0;
}