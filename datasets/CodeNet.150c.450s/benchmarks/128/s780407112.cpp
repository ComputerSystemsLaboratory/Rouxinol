#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++){
		cout << str[str.size()-i-1];
	}
	cout << "\n";
	cin >> str;
}