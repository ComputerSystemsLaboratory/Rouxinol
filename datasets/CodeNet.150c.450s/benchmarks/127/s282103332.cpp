#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool same_all(string str) {
	char c = str[0];
	for (int i = 1; i < str.length(); i++) {
		if (str[i] != c) {
			return false;
		}
	}
	return true;
}

bool check(std::vector<string> v, string str) {
	for (std::vector<string>::iterator itr = v.begin(); itr != v.end(); ++itr) {
		if (*itr == str) {
			return true;
		}
	}
	return false;
}

string rev_str(string str) {
	string res;
	for (int i = 0; i < str.length(); i++) {
		res += str[str.length()-i-1];
	}
	return res;
}

int main(void) {
	int n;
	cin >> n;
	string str;
	getline(cin, str);


	for (int i = 0; i < n; i++) {
		getline(cin, str);
		int len = str.length();
		int count = 0;
		std::vector<string> v;

		if (same_all(str)) {
			count = 1;
		} else {
			for (int j = 1; j < len; j++) {
				string str1,str2;
				str1 = str.substr(0, j);
				str2 = str.substr(j, len-1);
				string str3 = rev_str(str1);
				string str4 = rev_str(str2);

				if (!check(v, str1+str2)) {
					v.push_back(str1+str2);
					count++;
				}
				if (!check(v, str2+str1)) {
					v.push_back(str2+str1);
					count++;
				}
				if (!check(v, str1+str4)) {
					v.push_back(str1+str4);
					count++;
				}
				if (!check(v, str4+str1)) {
					v.push_back(str4+str1);
					count++;
				}
				if (!check(v, str2+str3)) {
					v.push_back(str2+str3);
					count++;
				}
				if (!check(v, str3+str2)) {
					v.push_back(str3+str2);
					count++;
				}
				if (!check(v, str3+str4)) {
					v.push_back(str3+str4);
					count++;
				}
				if (!check(v, str4+str3)) {
					v.push_back(str4+str3);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}