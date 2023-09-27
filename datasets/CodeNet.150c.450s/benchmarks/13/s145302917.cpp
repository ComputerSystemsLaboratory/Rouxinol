#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2;
	size_t index;

	getline(cin, str1);
	getline(cin, str2);


	str1 += str1;

	index = str1.find(str2);

	if (index != string::npos)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}