#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<int> s(26,0);
	int i, j,k, len, num;
	char u;
	string str;
	while (true) {
		getline(cin, str);
		if (str == "")break;
		len = str.length();
		for (i = 0; i < 26; i++) {
			num = 0;
			for (j = 0; j < len; j++) {
				if (str[j] == 'a' + i) {
					num += 1;
				}
				else if (str[j] == 'A' + i) {
					num += 1;
				}
			}
			s[i] += num;
		}
	}
	for (k = 0; k < 26; k++) {
		u = k + 'a';
		cout << u << " : " << s[k] << endl;
	}
	return 0;
}
