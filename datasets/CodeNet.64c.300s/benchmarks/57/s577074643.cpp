#include <stdio.h>

int R,C;
int osen[10][10000],max;

void func(int hako[10],int now){
	if(now==R){
		int val=0,i,j;
		//ツ板スツ転
		for(i=0;i<R;i++){
			if(hako[i]==1){
				for(j=0;j<C;j++){
					if(osen[i][j]==1){
						osen[i][j]=0;
					}
					else {
						osen[i][j]=1;
					}
				}
			}
		}
		//ツ青板つヲツづゥ
		for(i=0;i<C;i++){
			int count=0,j;
			
			for(j=0;j<R;j++){
				if(osen[j][i]==0){
					count++;
				}
			}
			if(count<=R/2){
				val+=(R-count);
			}
			else {
				val+=count;
			}
		}
		if(val>max){
			max=val;
		}
		
		//ツ板スツ転
		
		for(i=0;i<R;i++){
			if(hako[i]==1){
				for(j=0;j<C;j++){
					if(osen[i][j]==1){
						osen[i][j]=0;
					}
					else {
						osen[i][j]=1;
					}
				}
			}
		}
	}
	else {
		hako[now]=1;
		func(hako,now+1);
		hako[now]=0;
		func(hako,now+1);
	}
	
}

int main(void)
{
	
	while(scanf("%d%d", &R, &C),R,C){
		int i,j;
		int hako[10]={0};
		
		for(i=0;i<R;i++){
			for(j=0;j<C;j++){
				scanf("%d", &osen[i][j]);
			}
		}
		func(hako,0);
		printf("%d\n",max);
		max=0;
	}
	return 0;
}