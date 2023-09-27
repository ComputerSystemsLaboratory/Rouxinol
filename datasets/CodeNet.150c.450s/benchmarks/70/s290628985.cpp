#include <iostream>
#include <string>
using namespace std;

const string week[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

int zeller(int y, int m, int d) {
  if (m < 3) { --y; m += 12; }
  return (y+y/4-y/100+y/400+(13*m+8)/5+d) % 7;
}

int main() {
	int m, n;
	while ( cin >> m >> n, m | n) {
		cout << week[zeller(2004, m, n)] << endl;
	}
	return 0;
}