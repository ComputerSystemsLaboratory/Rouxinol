#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		double x1,x2,x3,x4,y1,y2,y3,y4;
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(x1==x2&&x3==x4)printf("YES\n");
		else{
			if((y1-y2)/(x1-x2)==(y3-y4)/(x3-x4))printf("YES\n");
			else printf("NO\n");
		}
	}
}