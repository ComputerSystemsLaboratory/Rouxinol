#include<iostream>
#include<string>
using namespace std;
int main()
{
	string text;
	cin >> text;
	text += text;
	string ma;
	cin >> ma;
	if (text.find(ma) == string::npos)
		cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}
