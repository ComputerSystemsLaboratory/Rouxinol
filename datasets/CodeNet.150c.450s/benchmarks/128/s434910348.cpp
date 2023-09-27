#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	const int l = str.length();
	for (int i = l; i--;) {
		cout << str[i];
	}
	cout<< endl;
	
	return 0;
}