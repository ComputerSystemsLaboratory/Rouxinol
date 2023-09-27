#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRMAX 256

int main(void)
{
	char str[STRMAX];
	char out[STRMAX];
	int		num;
	int		num2;
	int		i,j,k;

	while (1) {
		memset(str, '\0', sizeof(str));
		scanf("%s", str);
		if (str[0] == '-') {
			break;
		}
		else {
			scanf("%d", &num);

			for (i=0; i<num; i++) {
				scanf("%d", &num2);
				j = num2;
				k = 0;
				memset(out, '\0', sizeof(out));
				while (str[j] != '\0') {
					out[k] = str[j];
					k++;
					j++;
				}
				for (j=0; j<num2; j++) {
					out[k] = str[j];
					k++;
				}
				out[k] = '\0';
				strcpy(str, out);
			}
			printf("%s\n", str);
		}
	}
	return 0;
}


