#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	char str[1001][1001] ;
	int j = 0;
	for ( int i = 0; i < 1000; i++ )
	{
		 cin >> str[i];
		if ( str[i][0] == '0' )
		{
			break;
		}
		else
		{
			j++;
		}
	}
    
	for ( int i = 0; i < j; i++ )
	{
	int sum = 0;
	for ( int k = 0; k < strlen(str[i]); k++ )
	{
    sum += (str[i][k] - '0');
	}
		cout << sum << '\n';
	}
	return 0;
}
