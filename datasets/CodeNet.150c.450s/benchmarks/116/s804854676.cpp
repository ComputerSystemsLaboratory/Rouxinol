#include <iostream>
#include <cstring>
#include <climits>
int main()
{
	int n,k;
	while(std::cin>>n>>k,n|k){
		int memo[100000];
		int ans = INT_MIN;
		int cnt = 0;
		int sum = 0;
		memset(memo,0,sizeof(memo));
		
		for(int i=0; i<n; i++){
			int a; std::cin>>memo[i];
			if(cnt<k){
				sum+=memo[i]; cnt++;
			}
			else{
				sum = sum-memo[i-k]+memo[i];
				//printf("sum:%d\n",sum);
			}
			if( k==cnt && sum>ans ) ans = sum;
			//printf("sum:%d\n",sum);
		}
		printf("%d\n",ans);
	}
	return 0;
}