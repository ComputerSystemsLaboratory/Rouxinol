#include <iostream>
#include <string>
using namespace std;

string day[] = {
	"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
};

int main() {
	int y, m, d, c, h;
	while (cin >> m >> d, m) {
		y = 2004 - (m <= 2);
		m = m + 12 * (m <= 2);
		c = y / 100;
		y %= 100;
		h = d + (26 * (m + 1)) / 10 + y + y / 4 + 5 * c + c / 4;
		cout << day[h % 7] << endl;
	}
	return 0;
}