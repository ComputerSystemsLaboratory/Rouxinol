#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

#define DigFor(i, Dig) for(int i = 0; i < Dig; i++) 
using namespace std;

int Str2Num(string s)
{
	stringstream ss;
	ss << s;
	int num;
	ss >> num;
	return num;
}
string Num2Str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}
int main()
{
	string inp;
	int dig;

	while (cin >> inp >> dig)
	{
		int max = 0, min = 0, onum[22] = { 0 };

		onum[0] = Str2Num(inp);
		if (onum[0] == 0 && dig == 0) { break; }
		DigFor(i, 21)
		{
			int snum = inp.size();
			if (snum < dig)
			{
				DigFor(j, (dig - snum))
				{
					inp.push_back('0');
				}
			}
			sort(inp.begin(), inp.end());
			min = Str2Num(inp);
			reverse(inp.begin(), inp.end());
			max = Str2Num(inp);
			inp = Num2Str(max - min);
			onum[i + 1] = max - min;
		}
		int brnum = 0;
		DigFor(j, 21)
		{
			if (brnum == 1) { break; }
			DigFor(i, 21)
			{
				if (onum[j] == onum[i] && i != j)
				{
					brnum += 1;
					printf("%d %d %d\n" , j, onum[i], i - j);
					break;
				}
			}
		}
	}
	return 0;
}