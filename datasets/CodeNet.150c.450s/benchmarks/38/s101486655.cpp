#include<stdio.h>
int main(void){
	int i,N;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		int j,a[3]={},b[3]={};
		for(j=0;j<3;j++){
			scanf("%d",&a[j]);
			}
		
		b[0]=a[0];
		if(a[0]<a[1]){
			b[1]=a[0];
			b[0]=a[1];
		}else b[1]=a[1];
		if(b[0]<a[2]){
			b[2]=b[1];
			b[1]=b[0];
			b[0]=a[2];
		}else if(b[1]<a[2]&&a[2]<b[0]){
			b[2]=b[1];
			b[1]=a[2];
		}else b[2]=a[2];
		
	
		if(b[0]*b[0]==b[1]*b[1]+b[2]*b[2])
			puts("YES");
		else puts("NO");
	}
	return 0;
}

	