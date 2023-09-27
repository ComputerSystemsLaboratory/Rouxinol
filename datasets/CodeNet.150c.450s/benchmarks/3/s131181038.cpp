#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>


using namespace std;


int main()
{
	int count = 0, a = 0, b = 0;
	string input;

	cin >> input;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		string order;

		cin >> order >> a >> b;

		if (order == "print")
		{
			for (int i = a; i <= b; i++)
				cout << input[i];
			cout << endl;
		}
		else if (order == "reverse")
		{
			int b2 = b;
			string _input = input;

			for (int i = a ; i <= b; i++)
			{
				input[i] = _input[b2--];
			}
		
		}
		else if (order == "replace")
		{
			string cha;
			cin >> cha;

			input.replace(input.begin() + a, input.begin() + b + 1, cha);
		}


	}
	

	
}