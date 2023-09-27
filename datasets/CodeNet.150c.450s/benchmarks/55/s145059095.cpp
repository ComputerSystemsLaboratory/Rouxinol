#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>


using namespace std;


int main() 
{
	string input;
	int sum;
	for (;;)
	{
		cin >> input;
		if (input == "0")
			return 0;

		sum = 0;
		
		for (auto a : input)
		{
			if (a == '0')
				continue;
			sum += a - 48;
		}
		
		cout << sum << endl;
	}
	return 0;
}