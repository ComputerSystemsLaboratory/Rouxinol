#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int main(){
	  
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		
		int in[5555];
		rep(i,n)cin>>in[i];
		
		
		int ans = -1000000000;
		reps(i,1,n+1){
			
			int sum = 0;
			rep(j,i)sum += in[j];
			
			ans = max(ans,sum);
			reps(j,i,n){
				sum-=in[j-i];
				sum+=in[j];
				ans = max(ans,sum);
			}
		}
		printf("%d\n",ans);
	}
	
}