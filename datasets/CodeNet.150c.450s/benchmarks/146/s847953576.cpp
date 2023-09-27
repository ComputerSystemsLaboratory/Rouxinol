#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		float x1,x2,x3,x4,y1,y2,y3,y4;
		scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		float k1=(y2-y1)/(x2-x1),k2=(y4-y3)/(x4-x3);
		if(k1==k2)printf("YES\n");
		else printf("NO\n");}
	return 0;}
