#include <iostream>
using namespace std;

int main()
{
	int a, b, count = 0;
	int ans[100];
	while (cin >> a >> b) {
		if (a == 0)
			break;
		if (a == 1 || a == 4 || a == 7) {
			ans[count] = (b % 7 + 3)%7;
			if (ans[count] % 7 == 0)
				ans[count] = +7;
		}
		else if (a == 9 || a == 12) {
			ans[count] = (b % 7 + 2)%7;
			if (ans[count] % 7 == 0)
				ans[count] = +7;
		}
		else if (a == 2 || a == 8) {
			ans[count] = (b % 7 + 6)%7;
			if (ans[count] % 7 == 0)
				ans[count] = +7;
		}
		else if (a == 3 || a == 11) {
			ans[count] = b % 7;
			if (ans[count] % 7 == 0)
				ans[count]=+7;
		}
		else if (a == 5) {
			ans[count] = (b % 7 + 5)%7;
			if (ans[count] % 7 == 0)
				ans[count] = +7;
		}
		else if (a == 6) {
			ans[count] = (b % 7 + 1)%7;
			if (ans[count] % 7 == 0)
				ans[count] = +7;
		}
		else if (a == 10) {
			ans[count] = (b % 7 + 4)%7;
			if (ans[count] % 7 == 0)
				ans[count] = +7;
		}
		count++;
	}
	for (int i = 0; i < count; i++) {
		if (ans[i] == 1)
			cout << "Monday" << endl;
		else if (ans[i] == 2)
			cout << "Tuesday" << endl;
		else if (ans[i] == 3)
			cout << "Wednesday" << endl;
		else if (ans[i] == 4)
			cout << "Thursday" << endl;
		else if (ans[i] == 5)
			cout << "Friday" << endl;
		else if (ans[i] == 6)
			cout << "Saturday" << endl;
		else if (ans[i] == 7)
			cout << "Sunday" << endl;
	}
}