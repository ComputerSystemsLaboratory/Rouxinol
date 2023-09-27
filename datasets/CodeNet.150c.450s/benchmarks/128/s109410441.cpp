#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char a[21];
int main()
{
	char s,i=1,j;
	cin>>a;
	s=strlen(a);
	for(j=s-1;j>=0;j--)cout<<a[j];
    cout<<endl;
	return 0;
}