#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		int n;
		scanf(" %d", &n);
		if(n==0) break;

		//??????t????????????????????????????????°??£????????????
		int runningTrain[3600*24]={0};

		for(int i=0; i<n; ++i){
			int ah, am, as; //arrival
			int lh, lm, ls; //leave;

			scanf(" %d:%d:%d %d:%d:%d", &lh, &lm, &ls, &ah, &am, &as);

			int arrival = ah*3600+am*60+as;
			int leave = lh*3600+lm*60+ls;
			runningTrain[leave]++;
			runningTrain[arrival]--;
		}

		int ans=runningTrain[0];
		for(int i=0; i<3600*24-1; ++i){
			runningTrain[i+1] += runningTrain[i];
			ans = max(ans, runningTrain[i+1]);
		}

		printf("%d\n", ans);
	}
}