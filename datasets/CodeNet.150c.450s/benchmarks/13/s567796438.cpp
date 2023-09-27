#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
   
int main()
{
	char a[101],b[101],c[201];
	cin >> a >> b;
	strcpy(c,a);
	strcat(c,a);
	if(strstr(c,b))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;		
	return 0;
}