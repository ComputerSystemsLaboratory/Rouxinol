#include<iostream>
#include <map> 
#include <string>
using namespace std;

int main() {
	int n;
	string com;
	map<string, int> dic;
	cin >> n;
	string str;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> com >> str;
		if (com[0] == 'i') {
			dic.insert(pair<string,int>(str, cnt));
			cnt++;
		}
		else {
			int ret = dic.count(str);
			if (ret == 1)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
	return 0;
}