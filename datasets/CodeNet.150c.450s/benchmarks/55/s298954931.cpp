#include<stdio.h>
#include<string.h>

int main() {
	char x[1024];
	int datas[BUFSIZ];

	for (int i = 0; i < BUFSIZ;i++) {
		//in
		fflush(stdin);
		scanf("%s", x);

		datas[i] = 0;

		if (x[0] == '0') 	break;
		
		//initialize
		int len = strlen(x);

		//sum
		for (int j = 0; j < len; j++) {
			int temp = x[j] - '0';
			datas[i] += temp;
		}

	}
	
	for (int i = 0; i < BUFSIZ && datas[i]; i++) {
		printf("%d\n", datas[i]);
	}
	
	return 0;
}
