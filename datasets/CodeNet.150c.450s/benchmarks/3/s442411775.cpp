#include<iostream>
#include<string>
using namespace std;
void print(int, int);
void replace(int, int);
void reverse(int, int);

string str;

int main() {
	int q;
	cin >> str >> q;

	for (int i = 0; i < q; i++) {
		string op;
		int a,b;
		cin >> op >> a >> b;
		if (op == "print") print(a,b);
		else if (op == "replace") replace(a, b);
		else if (op == "reverse") reverse(a, b);
	
	}
	return 0;
}

void print(int a, int b) {
	string copy = str.substr(a, b - a + 1);
	cout << copy << endl;
}

void replace(int a, int b) {
	string s1;
	cin >> s1;
	str.erase(str.begin() + a, str.begin() + b + 1);
	int k = b - a + 1;
	for (int i = k - 1; i >= 0; i--) {
		str.insert(str.begin() + a, s1[i]);
	}
	//cerr << "replaced: " << str << endl;

}

void reverse(int a, int b) {
	string copy = str;
	for (int i = a; i <= b; i++) {
		str[i] = copy[b - (i-a)];
	}
	//cerr << "reversed: " << str << endl;;
}