#include <stdio.h>

int main(){
	int a, b, c, i,j=0,check=0;
	int yakusu[1000];
	scanf("%d%d%d", &a, &b, &c);
	for (i = 1;; i++){
		if (c%i == 0){
			yakusu[j] = i;
			if (i == c){
				break;
			}
			j++;
		}
	}

	for (i = 0; i <= j; i++){
		if (a <= yakusu[i] && yakusu[i] <= b){
			check++;
		}
	}

	printf("%d\n", check);

	return 0;
}