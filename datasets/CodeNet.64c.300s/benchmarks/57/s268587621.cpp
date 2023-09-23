#include<stdio.h>
bool cr[1<<10];
bool t[10][10000],ft[10][10000];
int r,c;
int i,j;
int n;
int ct;
int tot;
int ans;

int max(int a,int b){
	if(a>=b)return a;
	else return b;
}

int main(){
	while(1){
		scanf("%d %d",&r,&c);
		if(r==0&&c==0)return 0;
		ans=-1;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				scanf("%d",&n);
				ft[i][j]=(n==1);
			}
		}
		for(i=0;i<r;i++)for(j=0;j<c;j++)t[i][j]=ft[i][j];
		for(i=0;i<1<<r;i++){
			tot=0;
			for(j=0;j<r;j++){
				if((i>>j)&1)for(int k=0;k<c;k++)t[j][k]=!t[j][k];
			}
			for(j=0;j<c;j++){
				ct=0;
				for(int k=0;k<r;k++)if(t[k][j])ct++;
				if(ct>(int)r/2)for(int k=0;k<r;k++)t[k][j]=!t[k][j];
				for(int k=0;k<r;k++)if(!t[k][j])tot++;
			}
			ans=max(ans,tot);
			for(j=0;j<r;j++)for(int k=0;k<c;k++)t[j][k]=ft[j][k];
		}
		printf("%d\n",ans);
	}
}