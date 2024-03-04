#include<stdio.h>

int main(){
	int i,j,k,nb=0,low=9,height[10];
	for(i=0;i<10;i++)
		scanf("%d",&height[i]);
	for(i=0;i<3;i++)
		for(j=0;j<10;j++){
			for(k=0;k<10;k++)
				if(height[j]>height[k])
					nb++;
			if(nb==low){
				printf("%d\n",height[j]);
				low--;
				break;
			}
			nb=0;
		}

	return 0;
}