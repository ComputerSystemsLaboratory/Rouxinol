#include<iostream>
#include<string>
using namespace std;
int main() {
	int n; cin >> n;
	string s[10];
	s[0] = '0';
	s[1] = ".,!? ";
	s[2] = "abc";
	s[3] = "def";
	s[4] = "ghi";
	s[5] = "jkl";
	s[6] = "mno";
	s[7] = "pqrs";
	s[8] = "tuv";
	s[9] = "wxyz";
	for (int i = 0; i < n; i++) {


		string num;
		cin >> num;
		for (int j = 0; j < num.size(); j++) {
			if (j == 0) {
				if (num[j] == '0') {
					continue;
				}
			}

			else if (num[j - 1] == '0'&&num[j] == '0') {
				continue;
			}
			int t = 0;
			while (num[j + t] != '0')t++;
			switch (num[j]) {
			case '1':cout << s[1][(t - 1) % 5]; break;
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':cout << s[num[j] - '0'][(t - 1) % 3]; break;
			case '7':cout << s[7][(t - 1) % 4]; break;
			case '8':cout << s[num[j] - '0'][(t - 1) % 3]; break;
			case '9':cout << s[9][(t - 1) % 4]; break;
			default:break;
			}
			j += t;
		}
		cout << endl;






	}
	return 0;
}