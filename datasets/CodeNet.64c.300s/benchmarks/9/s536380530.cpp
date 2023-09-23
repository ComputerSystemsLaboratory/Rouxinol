#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int shakkinn=100000;
	int n;
	int i;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		shakkinn *= 1.05;
		while (shakkinn % 1000 != 0) {
			shakkinn++;

	}
}
	printf("%d\n", shakkinn);
	return 0;
}