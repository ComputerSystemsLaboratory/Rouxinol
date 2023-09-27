#include <stdio.h>

int main()
{
	int a[5], t;

	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	for (int i = 0; i < 5; ++i){
		for (int i = 0; i < 4; i++){
			if(a[i] < a[i+1]){
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}

	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

	return 0;
}