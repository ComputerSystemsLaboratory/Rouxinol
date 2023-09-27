#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>


using namespace std;


int main() 
{
	string input;
	int num;
	int counter[28] = {};
		
	while (cin >> input)
	{
		for (auto a : input)
		{
			a = tolower(a);

			num = a - 97;

			counter[num]++;
		}
	}

	for (char a = 'a';  a <= 'z'; a++)
	{
		cout << a << " : " << counter[a - 'a'] << endl;
	}

	return 0;
}