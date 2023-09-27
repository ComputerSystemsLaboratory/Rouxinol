#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

#define INF (1e+9)
#define LLINF (1e+18)
#define LL long long


using namespace std;


int array[200000];

int main (void){
	//printf("%lld:::%lld",(LL)INF,(LL)LLINF);

	int n;
	int k;

	LL sum;
	LL maxNum;

	while(true){
		sum = 0;
		maxNum = -1*(LL)LLINF;
		scanf("%d",&n);
		scanf("%d",&k);
		if((n==0)||(k==0))break;
		for(int i=0;i<n;i++){
			scanf("%d",array+i);
		}
		for(int i=0;i<k;i++){
			sum += array[i];
		}
		maxNum = max(maxNum,sum);
		for(int i=0;i<n-k;i++){
			maxNum = max(maxNum,sum = (sum-array[i]+array[i+k]));
		}
		printf("%lld\n",maxNum);
	}

	return 0;
}