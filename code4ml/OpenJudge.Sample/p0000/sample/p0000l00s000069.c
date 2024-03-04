#include <stdio.h>

void main(){
	int a[10], i, j, tmp;

	for(i = 0; i < 10; i++){
		scanf("%d",&a[i]);
	}

	for(i = 0; i < 10; i++){
		for(j = i + 1; j < 10; j++){
			if(a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for(i = 1; i <= 3; i++){
		printf("%d\n",a[10-i]);
	}
}