#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;



int main()
{	
	int n;
	cin >> n;
	int birth[1000][11][21];
	int ctn = 196470;
	for (int y = 1; y < 1000; y++) {
		for (int m = 1; m < 11; m++) {
			int ma;
			if (y % 3 == 0) ma = 20;
			else if (m % 2) ma = 20;
			else ma = 19;
			for (int d = 1; d <= ma; d++) {
				birth[y][m][d] = ctn;
				ctn--;
			}
		}
	}
	int y, m, d;
	while (n--) {
		cin >> y >> m >> d;
		cout << birth[y][m][d] << endl;
	}

	return 0;
}