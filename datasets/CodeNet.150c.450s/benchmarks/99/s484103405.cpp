#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string a, b, str;
		cin >> str;
		a += 'A'; a += str;
		cin >> str;
		b += 'A'; b += str;
		string ret;
		int num1 = 0, num2 = 0;
		for (int j = 0; j < a.length(); j++){
			if (a[j] == 'm'){
				if ('2' <= a[j-1] && a[j-1] <= '9'){
					num1 += (a[j-1]-'0') * 1000;
				}
				else num1 += 1000;
			}
			if (a[j] == 'c'){
				if ('2' <= a[j-1] && a[j-1] <= '9'){
					num1 += (a[j-1]-'0') * 100;
				}
				else num1 += 100;
			}
			if (a[j] == 'x'){
				if ('2' <= a[j-1] && a[j-1] <= '9'){
					num1 += (a[j-1]-'0') * 10;
				}
				else num1 += 10;
			}
			if (a[j] == 'i'){
				if ('2' <= a[j-1] && a[j-1] <= '9'){
					num1 += (a[j-1]-'0') * 1;
				}
				else num1 += 1;
			}
		}
		for (int j = 0; j < b.length(); j++){
			if (b[j] == 'm'){
				if ('2' <= b[j-1] && b[j-1] <= '9'){
					num2 += (b[j-1]-'0') * 1000;
				}
				else num2 += 1000;
			}
			if (b[j] == 'c'){
				if ('2' <= b[j-1] && b[j-1] <= '9'){
					num2 += (b[j-1]-'0') * 100;
				}
				else num2 += 100;
			}
			if (b[j] == 'x'){
				if ('2' <= b[j-1] && b[j-1] <= '9'){
					num2 += (b[j-1]-'0') * 10;
				}
				else num2 += 10;
			}
			if (b[j] == 'i'){
				if ('2' <= b[j-1] && b[j-1] <= '9'){
					num2 += (b[j-1]-'0') * 1;
				}
				else num2 += 1;
			}
		}
		//cout << num1 << " " << num2 << endl;
		num1 += num2;
		//cout << num1 << endl;
		if (2 <= (num1 / 1000) && (num1 / 1000) <= 9) {
			cout << num1 / 1000 << 'm';
			num1 %= 1000;
		}
		if (num1 / 1000 == 1) {
			cout << 'm';
			num1 -= 1000;
		}
		if (2 <= (num1 / 100) && (num1 / 100) <= 9) {
			cout << num1 / 100 << 'c';
			num1 %= 100;
		}
		if (num1 / 100 == 1) {
			cout << 'c';
			num1 -= 100;
		}
		if (2 <= (num1 / 10) && (num1 / 10) <= 9) {
			cout << num1 / 10 << 'x';
			num1 %= 10;
		}
		if (num1 / 10 == 1) {
			cout << 'x';
			num1 -= 10;
		}
		if (2 <= num1 && num1 <= 9) {
			cout << num1 << 'i';
		}
		if (num1 == 1) cout << 'i';
		puts("");
	}
	
	return 0;
}