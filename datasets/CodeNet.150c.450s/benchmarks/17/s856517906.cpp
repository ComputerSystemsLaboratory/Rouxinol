#include <stdio.h>
int main(){
	int a[5];
	for(int i=0;i<5;i++)	scanf("%d",&a[i]);
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]<a[j]){
				a[i]^=a[j];
				a[j]^=a[i];
				a[i]^=a[j];
			}
		}
	}
	for(int i=0;i<5;i++){
		if(i)	printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}