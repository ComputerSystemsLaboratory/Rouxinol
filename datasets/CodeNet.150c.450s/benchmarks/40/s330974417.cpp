#include<stdio.h>

int main(){
	
	int a[7],b;
	char D[101];
	
	for(int i=0;i<6;i++){
		
		scanf("%d",&a[i]);
	}
	scanf("%s",D);
	
	for(int i=0;D[i]!='\0';i++){
		
		b=a[0];
		if(D[i]=='E'){
			a[0]=a[3];
			a[3]=a[5];
			a[5]=a[2];
			a[2]=b;
		}
		else if(D[i]=='N'){
			a[0]=a[1];
			a[1]=a[5];
			a[5]=a[4];
			a[4]=b;
		}
		else if(D[i]=='S'){
			a[0]=a[4];
			a[4]=a[5];
			a[5]=a[1];
			a[1]=b;
		}
		else if(D[i]=='W'){
			a[0]=a[2];
			a[2]=a[5];
			a[5]=a[3];
			a[3]=b;
		}
	}
	printf("%d\n",a[0]);
	return 0;
}