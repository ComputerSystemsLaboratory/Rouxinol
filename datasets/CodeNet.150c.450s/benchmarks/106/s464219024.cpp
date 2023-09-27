#include <stdio.h>
int main(void){
	int a = 0, b = 0, c = 0;
	int cnt = 0;
	scanf("%d %d %d", &a, &b, &c);
	for (int x = a; x <= b; x++){
		if (c%x == 0){
			cnt++;
		}
	}
	printf("%d\n", cnt);
}