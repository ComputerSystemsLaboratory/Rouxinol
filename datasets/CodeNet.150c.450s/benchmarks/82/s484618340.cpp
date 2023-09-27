#include <iostream>
using namespace std;

int main() {
	int dice[6];
	for (int i = 0;i < 6;++i) {
		cin >> dice[i];
	}
	int n;
	cin >> n;
	while (n--) {
		int top,front;
		cin >> top >> front;
		// check top
		if (top == dice[0] || top == dice[2] || top == dice[3] || top == dice[5]) {
			// roll the dice in the direction of east till "top == dice[0]"
			while (top != dice[0]) {
				int temp = dice[0];
				dice[0] = dice[3];
				dice[3] = dice[5];
				dice[5] = dice[2];
				dice[2] = temp;
			}
		} else {
			// roll the dice in the direction of north till "top == dice[0]"
			while (top != dice[0]) {
				int temp = dice[0];
				dice[0] = dice[1];
				dice[1] = dice[5];
				dice[5] = dice[4];
				dice[4] = temp;
			}
		}
		// rotate the dice till "front == dice[1]"
		while (front != dice[1]) {
			int temp = dice[1];
			dice[1] = dice[2];
			dice[2] = dice[4];
			dice[4] = dice[3];
			dice[3] = temp;
		}
		cout << dice[2] << endl;
	}
}