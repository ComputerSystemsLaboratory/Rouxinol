#include <iostream>
using namespace std;

int mtoi(const string& str)
{
	int res = 0,temp = 1;
	for (int j = 0; j < str.length(); j++) {
		if(str[j] >= '0' && str[j] <= '9')
			temp = (int)(str[j] - '0');
		else if (str[j] == 'i') {
			res += temp;
			temp = 1;
		}
		else if (str[j] == 'x') {
			res += temp * 10;
			temp = 1;
		}
		else if (str[j] == 'c') {
			res += temp * 100;
			temp = 1;
		}
		else if (str[j] == 'm') {
			res += temp * 1000;
			temp = 1;
		}
	}
	return res;
}

int main()
{
	int n,res;
	string a,b;
	char ch;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		res = mtoi(a) + mtoi(b);
		if (res / 1000) {
			if (res / 1000 != 1) {
				cout << res / 1000;
			}
			cout << 'm';
			res -= res / 1000 * 1000;
		}
		if (res / 100) {
			if (res / 100 != 1) {
				cout << res / 100;
			}
			cout << 'c';
			res -= res / 100 * 100;
		}
		if (res / 10) {
			if (res / 10 != 1) {
				cout << res / 10;
			}
			cout << 'x';
			res -= res / 10 * 10;
		}
		if (res) {
			if (res != 1) {
				cout << res;
			}
			cout << 'i';
		}
		cout << endl;
	}
	return 0;
}