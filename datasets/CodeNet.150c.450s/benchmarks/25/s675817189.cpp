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
	char array[1201] = { 0 };
	int moji[26] = { 0 };
	int i = 0;
	while (scanf("%c", &array[i])!=EOF)
	{
		int t;
		t = array[i] - 'a';
		if (t >= 0 && t <= 26) moji[t]++;
		t = array[i] - 'A';
		if (t >= 0 && t <= 26) moji[t]++;
		i++;
	}
	
	for (int i = 0; i < 26; i++)
	{
		printf("%c : %d\n", i + 'a', moji[i]);
	}
	return 0;
}