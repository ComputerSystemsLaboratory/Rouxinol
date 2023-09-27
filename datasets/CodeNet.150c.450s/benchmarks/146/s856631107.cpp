#include<stdio.h>

int main(void){
	int n,i;
	double ax,ay,bx,by,cx,cy,dx,dy;	//入力
	double ab,cd;	//傾き;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);
		//傾きを求める
		ab=(by-ay)/(bx-ax);
		cd=(dy-cy)/(dx-cx);
		if(ab==cd)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}