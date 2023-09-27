#include<stdio.h>
int main(){
	int count=0,x,y,z;
	
	scanf("%d %d %d",&x,&y,&z);
	for(int i=x;i<=y;i++){
		if((z%i)==0){
			count++;
		}
	}
	printf("%d\n",count);
return 0;
}