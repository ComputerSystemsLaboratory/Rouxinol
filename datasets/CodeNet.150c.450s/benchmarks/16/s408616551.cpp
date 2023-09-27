#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20000

int Stack1[SIZE] = { 0 };
int tail = 0;
int Stack2[SIZE][2];	//(\pos,S)
int tail2 = 0;

void Push(int key) {
	Stack1[tail] = key;
	tail++;
}

int Pop() {
	tail--;
	return Stack1[tail];
}

void Push2(int pos, int S) {
	Stack2[tail2][0] = pos;
	Stack2[tail2][1] = S;
	tail2++;
}

int main() {
	char ch;
	int cnt = 0;
	int buffPop, buff;
	int SUM = 0, count = 0;
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n')break;

		if (ch == '\\') {
			Push(cnt);
		}
		if (ch == '/') {
			if (tail != 0) {
				buffPop = Pop();
				Push2(buffPop, cnt - buffPop);
				while (Stack2[tail2 - 2][0] > buffPop) {
					buff = Stack2[tail2 - 1][1];
					tail2 -= 2;
					Push2(buffPop, Stack2[tail2][1] + buff);
				}
			}
		}
		cnt++;
	}

	for (int i = 0; i < tail2; i++) {
		SUM += Stack2[i][1];
		count++;
	}
	printf("%d\n", SUM);
	printf("%d", count);
	if (count)printf(" ");
	for (int i = 0; i < tail2; i++) {
		printf("%d", Stack2[i][1]);
		if (i != tail2 - 1)printf(" ");
	}
	printf("\n");
	return 0;
}
