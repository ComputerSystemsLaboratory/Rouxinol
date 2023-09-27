#include <cstdio>
#include <string.h>
using namespace std;

#define n 100

int main (void)
{
	char ei[100], data[200], temp[100];

	scanf("%s", data);
	scanf("%s", ei);

	strcpy(temp, data);
	strcat (data, temp);


	if (strstr(data, ei) != NULL)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}