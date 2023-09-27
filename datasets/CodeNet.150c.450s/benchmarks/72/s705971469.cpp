#include <iostream>
#include <vector>
#include <cctype>	// ??§??????????°??????????????????????????????¨??????
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
	//char b;
	//vector<char> a;
	//a.resize(120);
	//// ??\????????????
	//int i = 0;
	//do{
	//	b = getchar();
	//	if (islower(b))			a[i] = toupper(b);
	//	else if (isupper(b))	a[i] = tolower(b);
	//	else					a[i] = b;
	//	i++;
	//} while (b != '\n');

	//// ??????
	//for (int i = 0; i < a.size(); i++)
	//{
	//	cout << a[i];
	//}
	//cout << endl;
	string s;
	getline(cin, s);
	char t;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (islower(s[i])) t =  toupper(s[i]);
		else if (isupper(s[i])) t = tolower(s[i]);
		else t = s[i];
		cout << t;
	}
	cout << endl;

	return 0;
}