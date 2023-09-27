#include<bits/stdc++.h>
using namespace std;

int main ( void )
{
	char a[100000];
	while(fgets(a, 100000, stdin))
	{
		if ( a[0] == '0')
		{
			break;
		}
		int sum = 0;
		for(int i = 0; a[i] != '\n'; i++)
		{
			sum += a[i] - '0';
		}	
		cout << sum << endl;		
	}
	return 0; 
}
