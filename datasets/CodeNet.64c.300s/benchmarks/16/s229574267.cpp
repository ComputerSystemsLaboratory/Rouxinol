#include <stdio.h>


using namespace std;



int main(){
	
	int n;
	int R[200000];
	int max;
	int gain;
	int ans;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &R[i]);
	}

	max = R[n - 1];
	ans = R[n - 1] - R[n - 2];
	for (int i = n - 2; i >= 0; i--){
		gain = max - R[i];
		if (gain > ans) ans = gain;
		if (R[i] > max)	max = R[i];
	}

	printf("%d\n", ans);

	return 0;
}