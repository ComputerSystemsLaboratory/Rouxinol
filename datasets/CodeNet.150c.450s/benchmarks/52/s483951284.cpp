#include <stdio.h>

int main(void)
{
	int num[10];
	int in;
	int ord[10];
	int i;
	
	for (i = 0; i < 10; i++){
		num[i] = 0;
	}
	while (scanf("%d", &in) == 1){
		if (in != 0){
			for (i = 0; i < 10; i++){
				if (!num[i]){
					num[i] = in;
					break;
				}
			}
		}
		else {
			for (i = 9; i >= 0; i--){
				if (num[i] != 0){
					printf("%d\n", num[i]);
					num[i] = 0;
					break;
				}
			}
		}
	}
	
	return (0);
}