#include <iostream>
using namespace std;

int main()
{
	long long input;
	long long first = 0;
	long long second = 0;
	long long third = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		// Update the tallest 3 mountains
		if (input > first)
		{
			third = second;
			second = first;
			first = input;	
		}
		else if (input > second)
		{
			third = second;
			second = input;
		}
		else if (input > third)
			third = input;
	}
	
	cout << first << endl << second << endl << third << endl;
}