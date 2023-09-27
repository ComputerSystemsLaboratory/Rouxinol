#include <stdio.h>
#include <string.h>

#define STRMAX 100

int main(void)
{
	int num, i;
	char taro[STRMAX], hanako[STRMAX];
	int result;
	int cnt_taro = 0;
	int cnt_hanako = 0;

	scanf("%d", &num);

	for(i=0; i<num; i++) {
		memset(taro, '\0', sizeof(taro));
		memset(hanako, '\0', sizeof(hanako));
		scanf("%s %s", taro, hanako);

		result = strcmp(taro,hanako);
		if (result > 0) {
			cnt_taro += 3;
		}
		else if (result < 0) {
			cnt_hanako += 3;
		}
		else {
			cnt_taro++;
			cnt_hanako++;
		}
	}

	printf("%d %d\n", cnt_taro, cnt_hanako);

	return 0;
}
