#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0, taro_point = 0, hanako_point = 0;
	char taro_card[100 + 1] = { 0 },
		hanako_card[100 + 1] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> taro_card >> hanako_card;
		int result = strcmp(taro_card, hanako_card);
		if (result > 0) {
			taro_point += 3;
		}
		else if (result < 0) {
			hanako_point += 3;
		}
		else {
			taro_point++;
			hanako_point++;
		}
	}
	cout << taro_point << " " << hanako_point << endl;
	return 0;
}