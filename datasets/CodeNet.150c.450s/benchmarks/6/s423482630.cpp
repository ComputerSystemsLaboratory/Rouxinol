#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	
	if (a<b && b<c)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}