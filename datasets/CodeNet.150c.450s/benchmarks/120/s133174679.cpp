#include<iostream>
using namespace std;

int main(){
while(1){
	int a[10][10000],r,c,b[11],ans=0;
	fill(b,b+11,0);
	scanf("%d%d",&r,&c);
if(r==0&&c==0)break;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	while(1){
		int d=0;
		for(int j=0;j<c;j++){
			int e=0;
			for(int i=0;i<r;i++){
				if((a[i][j]+b[i])%2==0)e++;
			}
			d+=max(e,r-e);
		}
		if(d>ans)ans=d;
		b[0]++;
		for(int i=0;i<10;i++){
			if(b[i]==2){
				b[i]=0;
				b[i+1]++;
			}
		}
		if(b[10]==1)break;
	}
	printf("%d\n",ans);
}
}