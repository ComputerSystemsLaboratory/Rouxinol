#include<iostream>
using namespace std;
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
int count1[101];
int main()
{
	int a;
	
	int max1 = 0;
	memset(count1, 0, sizeof(count1));
	while (cin>>a)
	{
		count1[a]++;
		if (count1[a] > max1)
		{
			max1 = count1[a];
		}
	
	}
	for (int i = 0; i < 101; i++)
	{
		if (max1 == count1[i])
		{
			cout << i << endl;
		}
	}
    return 0;
}

