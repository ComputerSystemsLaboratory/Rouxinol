#include <stdio.h> 
void func(int,int); 
int cnt,a,b,c;
int kou[17][17];
int main(void)  
{ 
	while(1){
		int i,j,x,y;
		scanf("%d %d",&a,&b); 
		if(a==0 && b==0) break;
		scanf("%d",&c);
		for(i=1;i<=b;i++){
			for(j=1;j<=a;j++){
				kou[i][j]=0;
			}
		}
		for(i=0;i<c;i++){
			scanf("%d %d",&x,&y);
			kou[y][x]=1;
		}	
		cnt=0;
		func(1,1);
		printf("%d\n",cnt);
	}
    return 0; 
}   
void func(int yy,int xx) 
{ 
	if(xx==a&&yy==b){
		cnt++;
	}
	else {
		if(xx+1<=a&&kou[yy][xx+1]==0){
			func(yy,xx+1);
		}
		if(yy+1<=b&&kou[yy+1][xx]==0){
			func(yy+1,xx);
		}
	} 
}