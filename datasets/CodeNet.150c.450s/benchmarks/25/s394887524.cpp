#include <cstdio>
using namespace std;

#define n 26

int main (void)
{
	char ei;	// input data
	int data[26]={0}, i, j;

	while (scanf("%c", &ei) != EOF ){

		if (ei >= 'A' && ei <= 'Z')
			data[ei-'A']++;
		else if (ei >= 'a' && ei <= 'z')
			data[ei-'a']++;

	}

	for (i=0; i<n; i++)
		printf("%c : %d\n", i+'a', data[i]);
	return 0;
}