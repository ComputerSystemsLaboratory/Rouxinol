#include <cstdio>
using namespace std;

int main (void)
{
	char data[1200];
	int i, p, key;

	scanf("%[^\n]", data);

	for (p=0; data[p] != '\0'; p++);

	key = 'a' - 'A';

	for (i=0; i<p; i++){
		if (data[i] >= 'A' && data[i] <= 'Z')
			printf("%c", data[i]+key);
		else if (data[i] >= 'a' && data[i] <= 'z')
			printf("%c", data[i]-key);
		else
			printf("%c", data[i]);
	}
          printf("\n");
	return 0;
}