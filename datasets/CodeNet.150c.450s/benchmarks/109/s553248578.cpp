#include "bits/stdc++.h"
using namespace std;
int train[24*60*60+1];
int main() {
	int n;
	while(scanf("%d",&n),n) {
		memset(train,0,sizeof(train));
		for(int i=0;i<n;i++) {
			int hh,mm,ss;
			scanf("%d:%d:%d",&hh,&mm,&ss);
			int l=hh*60*60+mm*60+ss;
			scanf("%d:%d:%d",&hh,&mm,&ss);
			int r=hh*60*60+mm*60+ss;
			train[l]++;
			train[r]--;
		}
		int ans=0;
		for(int i=0;i<24*60*60;i++) {
			train[i+1]+=train[i];
			ans=max(ans,train[i]);
		}
		printf("%d\n",ans);
	}
}