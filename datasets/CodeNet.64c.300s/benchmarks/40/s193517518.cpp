#include <stdio.h>

int main() {
	char data[1201];
	int num = -1;

	do {
		num++;
		scanf("%c", &data[num]);
	} while (data[num] != '\n');

	data[num+1] = '\0';
	int delay = -'a' + 'A';

	for (int i = 0; i < num; i++) {
		if ('a' <= data[i] && data[i] <= 'z') {
			data[i] += delay;

		} else if ('A' <= data[i] && data[i] <= 'Z') {
			data[i] += -delay;

		}

	}
	printf("%s", data);

	return 0;
}
