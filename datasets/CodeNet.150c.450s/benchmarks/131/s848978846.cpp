#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <functional>
#include <string.h>

using namespace std;

//FILE *in = freopen("input.txt", "r", stdin);

int n, m;
char data[30][10];
char format[10];

void input() {
	sprintf(format, "%%0%dd", m);
	sprintf(data[0], format, n);
	strcpy(data[1], data[0]);
}

void process() {
	char les[100];
	les[m] = 0;
	for(int i = 1; ;i++) {
		sort(data[i], data[i]+m, greater<char>());
		for(int j = m-1;j>=0;j--){
			les[j]=data[i][m-j-1];
		}
		int x = atoi(data[i]);
		int y = atoi(les);
		sprintf(data[i], format, x-y);

		for(int j = 0; j < i; j++){
			if(!strcmp(data[i], data[j])) {
				printf("%d %d %d\n", j, atoi(data[j]), i - j);
				return;
			}
		}
		strcpy(data[i+1], data[i]);
	}
}

int main() {
	while(true){
		scanf("%d%d", &n, &m);
		if (n == 0 && m == 0) break;
		input();
		process();
	}
	return 0;
}