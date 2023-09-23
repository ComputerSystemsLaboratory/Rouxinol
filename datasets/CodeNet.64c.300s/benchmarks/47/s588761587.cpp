#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>

//#define PI 3.141592653589

using namespace std;



int main()
{
	int dic[101];
	int data;
	int max_data = 0;
	
	for (int i=0; i<101; i++) dic[i] = 0;
	while (cin >> data)
	{
		dic[data]++;
		max_data = max(max_data, dic[data]);
	}
	for (int i=0; i<101; i++)
	{
		if (dic[i] == max_data)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}