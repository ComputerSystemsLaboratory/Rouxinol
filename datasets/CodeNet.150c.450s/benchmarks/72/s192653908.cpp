#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include<cctype>

using namespace std;

struct UPorLOW {
	char operator()(char c) {
		 return isupper(c) ? tolower(c) : islower(c) ? toupper(c) : c;
	}
};

int main()
{
	string s1, s2;
	getline(cin, s1);
	transform(s1.begin(), s1.end(), s1.begin(), UPorLOW());
	cout << s1 << "\n";
}