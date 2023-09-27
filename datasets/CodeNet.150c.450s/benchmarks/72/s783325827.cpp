#include<cstdio>
#include<cctype>

int main() {
	char c[1201];
	int i = 0;

	while (true) {
		scanf("%c",&c[i]);
		if (c[i] == '\n') break;
		i++;
	}
	i = 0;
	
	while (true) {
		if (islower(c[i]))	printf("%c", toupper(c[i]));
		else if (isupper(c[i])) printf("%c",tolower(c[i]));
		else printf("%c",c[i]);
		
		if (c[i] == '\n') break;
		i++;
	}

	return 0;
}