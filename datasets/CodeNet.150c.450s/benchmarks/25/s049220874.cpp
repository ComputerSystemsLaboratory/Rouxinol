#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	int a[26]={0};
	char b[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	while( cin >> ch )
	{
		ch = tolower(ch);
		if ( isalpha(ch) )
		{
			a[ch - 'a']++;
		}
	}

	for( int i=0; i<26; i++)
	{
		cout << b[i] <<  ' ' << ':' << ' ' << a[i] << endl;
	}
	return 0;
}
