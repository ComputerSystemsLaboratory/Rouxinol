#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	do
	{
		int sum = a + b;
		int count = 0;
	
		for(int i = 10; sum != 0; i *= 10)
		{
			int diff = sum % i;
			sum -= diff;
			count++;
		}
		cout << count << endl;
	
	}while( (cin >> a) && (cin >> b) );
	
	return 0;
}