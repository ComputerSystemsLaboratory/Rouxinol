// ConsoleApplication7.cpp : ??????????????? ??¢????????±????????§????????¨????????? ?????????????????????????????????
//

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	int a, b;
	int num;
	int aa[10000], bb[10000];
	char o;
	char op[10000];
	char temp[15];

	for (num = 0; 1; num++) {
		fgets(temp, sizeof(temp), stdin);
		sscanf(temp, "%d", &a);
		o = *(strchr(temp, ' ') + 1);
		if (o == '?') break; 
		sscanf(strrchr(temp, ' ') + 1, "%d", &b);
		aa[num] = a;
		bb[num] = b;
		op[num] = o;
	}
	for (i = 0; i < num; i++) {
		switch (op[i]) {
		case '+':
			printf("%d\n", aa[i] + bb[i]);
			break;
		case '-':
			printf("%d\n", aa[i] - bb[i]);
			break;
		case '*':
			printf("%d\n", aa[i] * bb[i]);
			break;
		case '/':
			printf("%d\n", aa[i] / bb[i]);
			break;
		default:
			break;
		}
	}
	
	return 0;
}