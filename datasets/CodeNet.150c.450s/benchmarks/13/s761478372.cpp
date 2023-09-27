#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<cctype>
#include<string.h>

int main()
{
	char s[101];
	char ss[201];
	char p[101];

	scanf("%s", &s);
	scanf("%s", &p);

	strcpy(ss, s);
	strcat(ss, s);

	if (strstr(ss, p) == NULL) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
	return 0;
}