#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	int val;
	int i = 1;

	cin >> val;

	while (val)
	{
		cout << "Case " << i << ": " << val << endl;
		cin >> val;
		i++;

	}

	return 0;
}