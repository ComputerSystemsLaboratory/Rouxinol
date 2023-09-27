#include<cstdio>
#include<algorithm>
using namespace std;

const int INF = 1000000000;

int main(){
	int ans[1000000];
	int bns[1000000];
	for(int i=0;i<1000000;i++){
		if(i==0){
			ans[i] = 0;
			bns[i] = 0;
			continue;
		}
		ans[i] = INF;
		bns[i] = INF;
		for(int j=0;i-j*(j+1)*(j+2)/6>=0&&j<200;j++){
			ans[i] = min(ans[i],ans[i-j*(j+1)*(j+2)/6]+1);
			if(j*(j+1)*(j+2)/6%2==1) bns[i] = min(bns[i],bns[i-j*(j+1)*(j+2)/6]+1);
		}
	}
	while(true){
		int n;
		scanf("%d",&n);
		if(n==0) break;
		else printf("%d %d\n",ans[n],bns[n]);
	}
	return 0;
}