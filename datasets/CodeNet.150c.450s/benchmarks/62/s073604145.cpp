#include<stdio.h>
int main(){
	int a[3];
	for(int i=0; i<3; i++){
		scanf("%d", &a[i]);
	}
	for(int i=2; i>0; i--){
		for(int j=0; j<i; j++){
			if(a[j]>a[j+1]){
				int temp = j[a];
				j[a]=j[a+1];
				j[a+1]=temp;
			}
		}
	}
	printf("%d %d %d\n", a[0], a[1], a[2]);
	
}
