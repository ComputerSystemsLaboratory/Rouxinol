#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	char s[201], t[201], p[101];

	cin >> s >> p;
	strcpy(t,s);
	strcat(s,t);
	if ( strstr(s ,p) == NULL )
		{ 
			cout << "No" << '\n';
	    }
	else 
	{ 
		cout << "Yes" << '\n';
	}

	return 0;
}
