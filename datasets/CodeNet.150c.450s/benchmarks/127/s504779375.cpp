#include <iostream>
#include <string>
#include <set>
using namespace std;

string revstr(const string& str)
{
	string ret;
	for (int i = str.length() - 1; i >= 0; i--) {
		ret += str[i];
	}
	return ret;
}

int main()
{
	int m;
	string str;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> str;
		set<string> setstr;
		setstr.insert(str);
		for (int ite = 1; ite < str.length(); ite++) {
			string str1 = str.substr(0,ite);
			string str2 = str.substr(ite, str.length() - ite);
			setstr.insert(revstr(str1) + str2);
			setstr.insert(str1 + revstr(str2));
			setstr.insert(revstr(str1) + revstr(str2));
			setstr.insert(str2 + str1);
			setstr.insert(str2 + revstr(str1));
			setstr.insert(revstr(str2) + str1);
			setstr.insert(revstr(str2) + revstr(str1));
		}
		cout << setstr.size() << endl;
	}
	return 0;
}