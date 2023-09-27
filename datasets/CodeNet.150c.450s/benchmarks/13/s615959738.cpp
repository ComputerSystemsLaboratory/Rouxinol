#include <iostream>
#include <string>
using namespace std;

int main()
{
	string arg, arg2;
	
	cin >> arg;
	cin >> arg2;
	arg += arg;
	
	if (arg.find(arg2) == string::npos)
	{
		cout << "No\n";
		return 0;
	}
	cout << "Yes\n";
	return 0;
}