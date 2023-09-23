#include <stdio.h>
int main(){
	int data[101],n,i,max=0;
	for(i=0;i<101;i++) data[i]=0;
	while(scanf("%d",&n)!=EOF){
		data[n]++;
		if(data[n]>max) max = data[n];
	}
	for(i=0;i<101;i++){
		if(data[i]==max) printf("%d\n",i);
	}
	return 0;
}