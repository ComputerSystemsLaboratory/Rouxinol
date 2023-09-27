#include <stdio.h>

void shuffle(char *st)
{
	char ch;
	ch = *st;

	while (*(st + 1)) {
		*st = *(st + 1);
		st++;
	}

	*st = ch;
}

int main(void)
{
	char a[201];
	int h, i, m, j;

	while (1) {
		scanf("%s\n", a);
		if (a[0] == '-')	break;
		scanf("%d", &m);
		for (i = 0; i < m; i++) {
			scanf("%d", &h);
			for (j = 0; j < h; j++)
				shuffle(a);
		}
		printf("%s\n", a);
	}

	return 0;
}