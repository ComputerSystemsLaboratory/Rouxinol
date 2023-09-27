#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

void func(int n){
	int table[n];

	for(int i = 0; i < n; i++)scanf("%d",&table[i]);

	int ans = 2000000;

	for(int i = 0; i < n-1; i++){
		for(int k = i+1; k < n; k++){
			ans = min(ans,abs(table[i]-table[k]));
		}
	}

	printf("%d\n",ans);

}


int main(){

	int n;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		func(n);
	}

	return 0;
}