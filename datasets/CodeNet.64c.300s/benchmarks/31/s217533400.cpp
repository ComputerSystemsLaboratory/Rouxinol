#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int a[30];
	for (int i = 0; i < 30; i++){
		a[i] = i+1;
	}
	int b;
	for (int i = 0; i < 28; i++){
		scanf("%d", &b);
		a[b-1] = 0;
	}
	for (int i = 0; i < 30; i++){
		if (a[i])
			printf("%d\n", a[i]);
		}
	return 0;
}