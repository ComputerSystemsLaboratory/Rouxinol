#include<cstdio>

int main() {

	char n[1001];
	int i = 0,sum = 0;
	
	while (true) {
		i = sum = 0;
		scanf("%c", &n[i]);
		if (n[0] == '0') break;
		sum += (n[i] - '0');
		i++;

		while (true) {
			scanf("%c", &n[i]);
			if (n[i] == '\n') break;
			sum += (n[i] - '0');
			i++;
		}
		printf("%d\n", sum);
	}
	return 0;
}