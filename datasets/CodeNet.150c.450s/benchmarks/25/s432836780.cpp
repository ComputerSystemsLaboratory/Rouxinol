#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <cctype>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	char c;
	int a[27];
	memset(a,0,sizeof(a));

	while(cin >> c)
	{
		if(isalpha(c))
		{
			c = tolower(c);
			a[c - 'a']++;
		}
	}

	rep(i,26)
	{
		cout << (char(i+'a')) << " : " << a[i] << endl;
	}
	

	return 0;
}