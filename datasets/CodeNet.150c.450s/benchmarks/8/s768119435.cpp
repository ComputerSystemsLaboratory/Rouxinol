#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str1[101], str2[101];
	int n, tp = 0, hp = 0;
	cin >> n;
	while (n--) {
		cin >> str1 >> str2;
		if (strcmp(str1, str2) > 0) {
			tp += 3;
		} else if (strcmp(str1, str2) < 0) {
			hp += 3;
		} else {
			tp++; hp++;
		}
	}
	cout << tp << ' ' << hp << endl;
	return 0;
}