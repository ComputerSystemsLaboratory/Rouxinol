#include <iostream>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::reverse;
using std::replace;
string Replace(string str, int a, int b, string p) {
	str.replace(a, b-a+1, p);
	return str;
}

string Reverse(string str, int a, int b) {
	reverse(str.begin() + a, str.begin() + b + 1);
	return str;
}

void Print(string str, int a, int b) {
	cout << str.substr(a, b-a+1) << endl;
}

int main() {
	string str;		// ?????????
	string stat;	// ??????????´???¨
	int stat_num;	// ???????????°
	int a, b;	// ??????????????¨
	string p;	// replace??¨
	cin >> str;
	cin >> stat_num;

	for (size_t i = 0; i < stat_num; i++)
	{
		cin >> stat;
		if (stat == "print") {
			cin >> a;
			cin >> b;
			Print(str, a, b);
		}
		else if (stat == "reverse")
		{
			cin >> a;
			cin >> b;
			str = Reverse(str, a, b);
		}
		else
		{
			cin >> a;
			cin >> b;
			cin >> p;
			str = Replace(str, a, b, p);
		}
	}
	return 0;
}