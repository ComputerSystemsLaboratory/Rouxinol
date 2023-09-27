#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
	while(1){
		int N, s, i, sum = 0, maxs = 0, mins = 1001;
		scanf("%d", &N);
		if(N == 0){
			return 0;
		}
		for(i = 0; i < N; i++){
			scanf("%d", &s);
			sum += s;
			maxs = max(maxs, s);
			mins = min(mins, s);
		}
		printf("%d\n", (sum - maxs - mins) / (N - 2));
	}
}
