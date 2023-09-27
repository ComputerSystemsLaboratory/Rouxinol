#include<iostream>
#include<cstdio>

using namespace std;

int r,c;
int ans=0;
int se[100001][10];
int flag[10];
int se2[10001][10];

int count(int fl[]){
	int res=0;
	for(int i=0;i<c;i++){
		int r2=0;
		for(int j=0;j<r;j++){
			se2[i][j]=(se[i][j]+fl[j])%2;
			if(se2[i][j]==1)r2++;
		}
		if(r2>=(r+1)/2)res+=r2;
		else res+=r-r2;
	}
	return res;
}

void check(int dy){
	if(dy==r){
		int res;
		res=count(flag);
		ans=max(res,ans);
	}
	else{
		flag[dy]=0;
		check(dy+1);
		flag[dy]=1;
		check(dy+1);
	}
}

int main(void){
	while(1){
		ans=0;
		scanf("%d%d",&r,&c);
		if(r==0 && c==0)break;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&se[j][i]);
			}
		}
		check(0);
		printf("%d\n",ans);
	}
    return 0;
}