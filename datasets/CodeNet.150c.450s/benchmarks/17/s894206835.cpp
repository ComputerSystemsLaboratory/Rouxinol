#include <cmath>
#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	int num[5];
	
	for (int i=0; i<5; i++)
	{
		cin >> num[i];
	}
	
	sort(num, num+5);
	
	for (int i=4; i>=0; i--)
	{
		if (i != 0)
		{
			cout << num[i] << " ";
		} else {
			cout << num[i] << endl;
		}
	}
}