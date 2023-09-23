#include <cstdio>
#include <algorithm>
using namespace std;

int r[1024][10];
int bd[10][10000],R,C;

void set(){
	for(int i=0;i<1<<R;i++){
		int k=i;
		for(int j=0;j<R;j++){
			r[i][j] = k%2; k=k/2;
		}
	}
}

void solve(){
	int ans=0;
	for(int n=0;n<1<<R;n++){
		int wholesum=0;
		for(int i=0;i<R;i++){
			if(r[n][i]){
				for(int j=0;j<C;j++) bd[i][j]=!bd[i][j];
			}
		}
		for(int j=0;j<C;j++){
			int sum=0;
			for(int i=0;i<R;i++) sum+=bd[i][j];
			wholesum+=max(sum,R-sum);
		}
		ans=max(ans,wholesum);
		for(int i=0;i<R;i++){
			if(r[n][i]){
				for(int j=0;j<C;j++) bd[i][j]=!bd[i][j];
			}
		}
	}
	printf("%d\n",ans);
}

int main(){
	while(1){
		scanf("%d %d",&R,&C);
		if(R==0 && C==0) break;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				scanf(" %d",&bd[i][j]);
			}
		}
		set();
		solve();
	}
	return 0;
}