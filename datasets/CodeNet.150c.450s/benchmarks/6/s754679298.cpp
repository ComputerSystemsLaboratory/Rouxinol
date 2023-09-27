#include <iostream>

using namespace std;

#define INPUT_MIN 0
#define INPUT_MAX 100

int main()
{
	int a = 0, b = 0, c = 0;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	if( (INPUT_MIN > a) || (INPUT_MAX < a) )
	{
		return 1;
	}
	
	if( (INPUT_MIN > b) || (INPUT_MAX < b) )
	{
		return 1;
	}
	
	if( (INPUT_MIN > c) || (INPUT_MAX < c) )
	{
		return 1;
	}
	
	if(a >= c)
	{
		cout << "No" << endl;
	}
	else if( (a >= b) || (c <= b) )
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
	
	return 0;
}
