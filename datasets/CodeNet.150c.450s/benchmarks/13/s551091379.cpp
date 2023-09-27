#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
   
int main()
{
	int size;
	char a[101],b[101];
	cin >> a >> b;
	size = sizeof a;
	char *c = new char[size*2+1];
	strcpy(c,a);
	strcat(c,a);
	if(strstr(c,b))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	delete [] c;
	return 0;
}