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
	int count = 0, taro = 0, hanako = 0;
	string str1, str2;

	cin >> count;


	for (int i = 0; i < count; i++)
	{
		cin >> str1 >> str2;

		if (str1 == str2)
		{
			taro++;
			hanako++;
		}
		else if(str1 > str2)
		{
			taro += 3;
		}
		else if (str1 < str2)
		{
			hanako += 3;
		}
	}

	cout << taro << " " << hanako << endl;

	
}