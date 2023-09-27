#include <iostream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

#define pi 3.141592653589
#define repeat(i,n) for(int i=0;i<n;i++)

int main()
{
	string array;
	string right;
	int n1,n2;
	bool ans=false;

	cin >> array;
	cin >> right;

	n1 = array.length();
	n2 = right.length();
	
	for (int i = 0; i < n1; i++)
	{
		if (array[i] == right[0])
		{
			for (int j = 0; j < n2; j++)
			{
				if (right[j] != array[(i + j)%n1]) break;
				if (j == n2 - 1) ans = true;
			}
		}
	}
	if (ans == true) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}