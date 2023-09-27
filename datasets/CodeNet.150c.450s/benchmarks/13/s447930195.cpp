using namespace std;
#include <stdio.h>
int main()
{
	char str[101], p[101];
	int i, j, a, b, Bool = 0;
	for (i = 0;; i++){ str[i] = getchar(); if (str[i] == '\n')break; }
	a = i;
	for (j = 0;; j++){ p[j] = getchar(); if (p[j] == '\n')break; }
	b = j;
	for (i = 0; i < a; i++){
		for (j = 0; j < b; j++){
			if (str[(i + j) % a] != p[j])break;
			else if (p[j + 1] == '\n')Bool = 1;
		}
	}
	if (Bool) printf("Yes\n");
	else printf("No\n");
}