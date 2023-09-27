#include<cstdio>
#include<cstring>

int main(){
	int a[30];
	int b;
	memset(a,-1,sizeof(a));
	for(int i=0;i<30;i++){
		scanf("%d",&b);
		a[--b]=false;
		}
	for(int i=0;i<30;i++){
		if(a[i])printf("%d\n",i+1);
		}



	return 0;
	}