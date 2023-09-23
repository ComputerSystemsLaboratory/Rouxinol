#include <stdio.h>

int main(void){
	int N[3];
	int work = 0;
	scanf("%d%d%d", &N[0], &N[1], &N[2]);
	for (int i = 0; i < 2; i++){
		if (N[0] > N[1]){
			work = N[0];
			N[0] = N[1];
			N[1] = work;
		}
		if (i == 0){
			if (N[1] > N[2]){
				work = N[1];
				N[1] = N[2];
				N[2] = work;
			}
		}
	}
	printf("%d %d %d\n", N[0], N[1], N[2]);

}