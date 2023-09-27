#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <algorithm>

using namespace std;
int a;
char test[21];
char temp;

int main()
{
	scanf("%s",test);
	for(a=strlen(test)-1;a>=0;a--)
	{
	printf("%c",test[a]);
	}
	printf("\n");
	return 0; 
}