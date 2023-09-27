#include <stdio.h>
int main(){
	int n,i,min,max;
	long int sum=0;
	int data[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
		sum +=data[i];
	}
	max = data[0];
	min = data[0];
	for(i=1;i<n;i++){
		if(max<=data[i]){
			max = data[i];
		}
		if(min>=data[i]){
		min = data[i];
		}
	}
	printf("%d %d %ld\n",min,max,sum);
}