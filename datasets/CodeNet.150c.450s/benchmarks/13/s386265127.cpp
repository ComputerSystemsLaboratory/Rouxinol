#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char s[200];
	char p[101];
	int i, j;

	i = 0;
	j = 0;

	while (1) {
		scanf("%c", &s[i]);
		if (s[i] == '\n') break;
		i++;
	}
	for (int k = 0; k < i; k++)
		s[k + i] = s[k];


	while (1) {
		scanf("%c", &p[j]);
		if (p[j] == '\n') break;
		j++;
	}
	int m;
	for (int k = 0; k < i; k++) {
		if (s[k] == p[0]) {
			for (m = 0; m < j; m++) {
				if (s[k + m] != p[m])
					break;
			}
			if(m == j) {
				printf("Yes\n");
				return (0);
			}
		}
	}
	printf("No\n");

	return (0);
}