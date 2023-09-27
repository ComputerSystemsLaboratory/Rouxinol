#include <cstdio>
#include <string.h>
using namespace std;

#define n 100

char temp[100], data[200];
int key=0;

void henkan(char ei[])
{
	int i, d;

	d = 'a' - 'A';

		for (i=0; i<strlen(ei); i++){
			if (ei[i] >= 'A' && ei[i] <= 'Z')
				ei[i] += d;
		}
}

int main (void)
{
	char ei[1001];
	int count=0;


	scanf("%s", data);

	henkan(data);

	while (scanf("%s", ei) != EOF && strcmp(ei, "END_OF_TEXT")!=0){

		if(strlen(ei) == strlen(data))
			henkan(ei);

		if (strcmp(ei, data) == 0)
			count++;
	}

	printf("%d\n", count);

	return 0;
}