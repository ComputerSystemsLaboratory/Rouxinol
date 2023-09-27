#include<cstdio>
#include<vector>

using namespace std;

int main(void){
	int n;
	while(scanf("%d", &n) && n){
		
		int num[5001]={0};
		int total[5001]={0};
		int ans = -2000000000;
		
		for(int i = 0; i < n; i++){
			scanf("%d", &num[i]);
		}
		
		for(int i = 0; i < n; i++){
			for(int j = i; j < n; j++){
				total[i] += num[j];
				ans = max(ans,total[i]);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}