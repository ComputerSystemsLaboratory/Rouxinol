#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int i = str.size() - 1; i >= 0; --i)
	{
		cout << str.at(i);
	}
	cout << endl;

	return 0;
}