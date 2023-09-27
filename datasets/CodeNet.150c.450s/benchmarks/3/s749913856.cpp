#include<iostream>
#include<string>
using namespace std;

void Replace();
void Reverse();
void Print();

string str;

int main() {
	string ver;
	int q;
	cin >> str >> q;
	for (int i = 0; i < q; i++) {
		cin >> ver;
		if (ver == "replace") Replace();
		else if (ver == "reverse") Reverse();
		else if (ver == "print") Print();
	}

	
	return 0;
}

void Print() {
	int a, b;
	cin >> a >> b;
//	str = str.substr(a, b - a + 1);
	cout << str.substr(a, b - a + 1) << endl;

}

void Reverse() {
	int a, b;
	cin >> a >> b;
	string temp = str.substr(a, b - a + 1);
	int n = temp.size();
	for (int i = 0; i <n ; i++) str[a+i] = temp[n-i-1];
	
}

void Replace() {
	int a, b;
	string p;
	cin >> a >> b >> p;
	str = str.replace(a, b - a + 1, p);
}
