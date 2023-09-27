#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a[5],i,j,b;
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(a[j]<=a[j+1]){
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d",a[i]);
		if(i<4){
			printf(" ");
		}else{
			printf("\n");
		}
	}
	return 0;
}