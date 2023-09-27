#include <iostream>

using namespace std;

#define INPUT_MIN -1000
#define INPUT_MAX 1000

int main()
{
	int a = 0, b = 0;
	
	cin >> a;
	cin >> b;
	
	
	if( (INPUT_MIN > a) || (INPUT_MAX < a) )
	{
		return 1;
	}
	
	if( (INPUT_MIN > b) || (INPUT_MAX < b) )
	{
		return 1;
	}
	
	if(a < b)
	{
		cout << "a < b" << endl;
	}
	else if(a > b)
	{
		cout << "a > b" << endl;
	}
	else
	{
		cout << "a == b" << endl;
	}
	
	return 0;
}
