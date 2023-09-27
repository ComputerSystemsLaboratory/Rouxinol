#include<stdio.h>

int main(){
	int x=0,y=0,z=0;
	scanf("%d %d %d",&x,&y,&z);
	if(x<y && y<z){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}
