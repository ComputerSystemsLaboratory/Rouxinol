#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	string str = " == ";

	if (a < b)
	{
		str = " < ";
	}
	else if (a > b)
	{
		str = " > ";
	}
	
	cout << "a" << str << "b" << endl;


	return 0;
}
