#include <iostream>

using namespace std;

void call(int num) {

	for (int i = 1; i <= num; i++) {

		int x = i;

		//3????????°?????¨???
		if (x % 3 == 0) {
			cout << " " << i;
		}
		//3???????????°?????¨???
		else {
			do {

				if (x % 10 == 3) {
					cout << " " << i;
					break;
				}

				x/= 10;

			} while (x);

		}
	}

	cout << endl;

}

int main(){

	int num;

	cin >> num;

	call(num);
	
	return 0;
}