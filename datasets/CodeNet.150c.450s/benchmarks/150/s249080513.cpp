#include <stdio.h>
int main(){
	int n,a[10001],temp,low=10001;
	for(int i=0;i<10001;i++){
		a[i]=0;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d",&temp);
if(temp<low)low=temp;
	a[temp]++;
	}
printf("%d",low);
a[low]--;
	for(int i=0;i<10001;i++){
		while(a[i]>0){
			a[i]--;
			printf(" %d",i);
		}
	}
	printf("\n");
}