#include<stdio.h>
#include<string.h>

int main(){
	int num[5],j,i,k;
	
	for(i=0;i<5;i++)scanf("%d",&num[i]);
	
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(num[i]<num[j]){
				k=num[i];
				num[i]=num[j];
				num[j]=k;
			}
		}
	}
	
    printf("%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[4]);
return 0;
}