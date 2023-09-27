#include<cstdio>
#include<cstring>

int fie[10][10];
int cnt_h[10][10];
int bomb[10][10];
int next[10];
int h;

void fall(int x){
	memset(next,0,sizeof(next));
	int cnt=h-1;
	for(int i=h-1;i>=0;i--){
		if(fie[x][i]!=0)next[i]=cnt,cnt--;
	}
	for(int i=h-1;i>=0;i--){
		if(fie[x][i]!=0)fie[x][next[i]]=fie[x][i];
	}
	for(int i=0;i<=cnt;i++)fie[x][i]=0;
}

void bomber(){
	for(int i=0;i<h;i++){
		for(int j=0;j<5;j++){
			if(bomb[j][i]==1)fie[j][i]=0;
		}
	}
	for(int i=0;i<5;i++)fall(i);
}

int main(void){
	while(1){
		scanf("%d",&h);
		if(h==0)break;
		memset(fie,0,sizeof(fie));
		int all=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				scanf("%d",&fie[j][i]);
				all+=fie[j][i];
			}
		}
		int flag=1,cnt=1;
		while(flag){
			flag=0;
			memset(cnt_h,0,sizeof(cnt_h));
			memset(bomb,0,sizeof(bomb));
			for(int i=0;i<h;i++){
				cnt=1;
				for(int j=1;j<5;j++){
					if(fie[j][i]==fie[j-1][i] && fie[j][i]!=0)cnt++;
					else cnt=1;
					cnt_h[j][i]=cnt;
				}
			}
			for(int i=0;i<h;i++){
				for(int j=2;j<5;j++){
					if(cnt_h[j][i]==3){
						bomb[j-2][i]=bomb[j-1][i]=bomb[j][i]=1;
						flag=1;
					}
					if(cnt_h[j][i]>3)bomb[j][i]=1;
				}
			}
			if(flag)bomber();
		}
		int rest=0;
		for(int i=0;i<5;i++){
			for(int j=0;j<h;j++)rest+=fie[i][j];
		}
		printf("%d\n",all-rest);
	}
	return 0;
}