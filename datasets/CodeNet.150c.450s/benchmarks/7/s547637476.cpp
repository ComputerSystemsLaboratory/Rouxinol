#include <stdio.h>

int main(){

	int a[10];
	int temp = 0;

	for(int i=0	;i<10 ;i++) scanf("%d",&a[i]);

	for(int i=0; i<9; i++){
		for(int j=9; j>i; j--){
			if(a[j-1] < a[j]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}

	for(int i=0; i<3; i++) printf("%d\n",a[i]);
}