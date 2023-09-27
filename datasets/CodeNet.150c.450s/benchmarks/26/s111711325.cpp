#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	char* ret = "a < b";
	if (a == b)
	{
		ret = "a == b";
	}
	else if (a > b)
	{
		ret = "a > b"; 
	}
	cout << ret << endl;
	return 0;
}