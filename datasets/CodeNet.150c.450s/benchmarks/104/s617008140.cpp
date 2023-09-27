#include <iostream>
#include <stdio.h>

using namespace std;

void change2(int* a, int* b) {
	int tmp;
	
	tmp = *a;
	*a  = *b;
	*b  = tmp;
}

int main(void) {
	int w, n;
	int a, b;
	int value[30];
	char buf[256];
	
	for (int i=0; i<30; i++) {
		value[i] = i+1;
	}
	
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &w);
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &n);
	
	for (int i=0; i<n; i++) {
		fgets(buf, sizeof(buf), stdin);
		sscanf(buf, "%d,%d", &a, &b);
		change2(&value[a-1], &value[b-1]);
	}
	
	for (int i=0; i<w; i++) {
		printf("%d\n", value[i]);
	}
	
	return 0;
}