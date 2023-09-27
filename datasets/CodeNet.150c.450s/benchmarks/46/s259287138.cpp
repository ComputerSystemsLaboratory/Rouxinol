#include<iostream>

using namespace std;

int main() {
	int n, x;
	bool isOver = false;

	while (!isOver) {
		cin >> n >> x;
		if (n == 0 && x == 0) {
			isOver = true;
			break;
		}
		else {
			int *numList = new int[n];
			int sum = 0;
			for (int i = 0; i < n; i++) {
				numList[i] = i + 1;
			}
			/* search for result  use x for minus*/
			for (int i = 0; i < n - 2; i++) {
				for (int j = i + 1; j < n - 1; j++) {
					if (((x - numList[i]-numList[j]) <= n)&& ((x - numList[i] - numList[j]) > (j+1))) {
						sum += 1;
					}
				}
			}
			cout << sum << endl;

			delete[] numList;
		}
	}

	//system("pause");
	return 0;
}