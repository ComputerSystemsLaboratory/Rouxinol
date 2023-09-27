#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include<cctype>

using namespace std;

int main()
{
	string s1;
	getline(cin, s1);
	for (int i = 0; i < s1.length(); i++) {
		if (islower(s1[i])) cout << static_cast<char>(toupper(s1[i]));
		else if (isupper(s1[i])) cout << static_cast<char>(tolower(s1[i]));
		else cout << s1[i];
	}
	cout << "\n";
}