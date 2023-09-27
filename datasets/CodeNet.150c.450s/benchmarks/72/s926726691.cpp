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

	getline(cin, input);

	for (int i = 0; i < input.size(); i++)
	{
		if (isupper(input[i]))
			input[i] += 32;
		else if (islower(input[i]))
			input[i] -= 32;
	}

	cout << input << endl;
	return 0;
}