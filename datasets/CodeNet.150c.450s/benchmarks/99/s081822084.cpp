#include <iostream>
#include <string>

using namespace std;

int decode(string a);
string encode(int a);
int base(char a);

int main() {
	string str1, str2, ans; // 入力MCXI文字列2つ、答えのMCXI文字列
	int a, b, sum;
	int n;

	/*
	cin >> str1;
	cout << decode(str1) << endl;
	*/

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str1 >> str2;
		a = decode(str1);
		b = decode(str2);
		sum = a + b;
		
		ans = encode(sum);
		//cout << a << " " << b << " " << sum << " " << ans << endl;
		cout << ans << endl;
	}

	return 0;
}

int decode(string a) {
	int n = 0;
	char c;
	for (unsigned int i = 0; i < a.size(); i++) {
		c = a.at(i);
		//cout << c << endl;
		if (!(c >= '2' && c <= '9')) {
			//cout << "0" << endl;
			if (i == 0) {
				//cout << "1" << endl;
				n += base(c);
			} else {
				//cout << "2" << endl;
				if (a.at(i - 1) >= '2' && a.at(i - 1) <= '9') {
					//cout << "3" << endl;
					n += base(c) * (a.at(i - 1) - '0');
				} else {
					//cout << "4" << endl;
					n += base(c);
				}
			}
		}
		//cout << "n = " << n << endl;
	}
	
	return n;
}

string encode(int a) {
	string str;
	int n = 0;
	string b = "mcxi";
	int mod;

	for (int i = 1000; i >= 1; i /= 10) {
		mod = a % i;
		a /= i;
		if (a >= 1) {
			if (a >= 2) {
				str += a + '0';
			}
			str += b[n];
		}
		n++;
		a = mod;
	}
	
	return str;
}

int base(char a) {
	if (a == 'm') {
		return 1000;
	} else if (a == 'c') {
		return 100;
	} else if (a == 'x') {
		return 10;
	} else if (a == 'i') {
		return 1;
	} else {
		return -1;
	}
}