#include <stdio.h>
#include <string.h>

#define STRMAX 256

int main(void)
{
	char str[STRMAX];
	char out[STRMAX];
	int		num;
	int		num2;
	int		i;

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
				memset(out, '\0', sizeof(out));
				strcpy(out, &str[num2]);
				str[num2] = '\0';
				strcat(out,str);
				memset(str, '\0', sizeof(str));
				strcpy(str,out);
			}
			printf("%s\n", str);
		}
	}
	return 0;
}

