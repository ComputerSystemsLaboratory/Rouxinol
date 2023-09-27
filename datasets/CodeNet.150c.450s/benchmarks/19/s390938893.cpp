#include <iostream>
using namespace std;

int main() {
	int datas[3000][2];
	int count = 0;
	while (true) {
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		}
		datas[count][0] = x;
		datas[count][1] = y;
		count++;
	}
	for (int i = 0; i < count; i++) {
		if (datas[i][0] < datas[i][1]) {
			cout << datas[i][0] << " " << datas[i][1] << endl;
		} else {
			cout << datas[i][1] << " " << datas[i][0] << endl;
		}
	}
}
