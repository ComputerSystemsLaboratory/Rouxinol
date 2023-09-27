#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<queue>
#include<map>
#include<functional>
#include<cstring>
using namespace std;
int main() {
	int n,k;
	int num[100001] = {0};
	while(scanf("%d%d",&n,&k),(n|k)){
		memset(num,0,sizeof(num));
		for(int i = 0; i < n; i++){
			scanf("%d",&num[i]);
		}
		int sum = 0;
		for(int i = 0; i < k; i++){
			sum += num[i];
		}
		int tmp = sum;
		for(int i = k; i < n; i++){
			tmp += num[i];
			tmp -= num[i-k];
			sum = max(sum,tmp);
		}
		printf("%d\n",sum);
	}
    return 0;
}