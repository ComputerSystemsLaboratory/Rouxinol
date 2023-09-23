#include <iostream>
using namespace std;

int main() {

	int num; //???????????\???????????°

	int t;   //????¨?
	int a;   //?¶??????°

	int ans; //??????

	while (true) {

		cin >> num;

		if (num == 0)
			break;

		ans = 0;

		for (int i = 1; i < num; i++) {

			t = i;
			a = i;

			while (t < num) {

				a++;
				t = t + a;


			}

			if (t == num)
				ans++;


		}

		cout << ans << endl;

	}

	return 0;

}