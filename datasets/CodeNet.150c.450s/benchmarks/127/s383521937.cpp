#include<iostream>
#include<set>
#include<string>
#include<iterator>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		set<string>s;
		cin >> str;
		for (int j = 1; j < (int)str.size(); j++) {
			string str1, str2, rstr1, rstr2;
			str1 = str.substr(0, j);
			str2 = str.substr(j);
			for (auto itr = str1.rbegin(); itr != str1.rend(); itr++)rstr1 += *itr;
			for (auto itr = str2.rbegin(); itr != str2.rend(); itr++)rstr2 += *itr;
			s.insert(str1 + str2); s.insert(rstr1 + str2); s.insert(str1 + rstr2); s.insert(rstr1 + rstr2);
			s.insert(str2 + str1); s.insert(rstr2 + str1); s.insert(str2 + rstr1); s.insert(rstr2 + rstr1);
		}
		cout << s.size() << endl;
	}
}