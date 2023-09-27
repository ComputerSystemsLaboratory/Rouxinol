#include <iostream>
#include <cstring>
#include <sstream>
#include <cctype>
using namespace std;

void print(string &str){
	int a, b;
	cin >> a >> b;
	cout << str.substr(a, b - a + 1) << endl;
}

void reverse(string &str){
	int a, b;
	cin >> a >> b;
	string strR = str.substr(a, b - a + 1);
	for (int i = 0; i < strR.size()/2; i++){
		char a = strR[i];
		strR[i] = strR[strR.size() - i - 1];
		strR[strR.size() - i - 1] = a;
	}
	str.replace(a, b - a + 1, strR);
}

void replace(string &str){
	int a, b;
	string p;
	cin >> a >> b >> p;
	str.replace(a, b - a + 1, p);
}

int main(){

	string str;
	int q = 0;
	cin >> str;
	cin >> q;
	for (int i = 0; i < q;i++){
		string c;
		cin >> c;
		if (c == "replace")replace(str);
		else if (c == "reverse")reverse(str);
		else if (c == "print")print(str);
	}
	return 0;
}
