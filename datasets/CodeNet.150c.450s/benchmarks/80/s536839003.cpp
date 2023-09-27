#include<stdio.h>

int main(){
	int a[4];
	int b[4];
	int s=0,t=0;
	scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3]);
	for(int i=0;i<4;i++){
		s+=a[i];
		t+=b[i];
	}
	if(s>=t){
		printf("%d\n",s);
	}else{
		printf("%d\n",t);
	}
}