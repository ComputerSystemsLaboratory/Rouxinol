#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	while(cin>>n>>m,n,m){
		int ans=0;
		queue<int> que;
		for(int i=0,num;i<m;i++){
			cin>>num;
			que.push(num);
			ans+=num;
		}
		for(int i=m,num,sum=ans-que.front();i<n;i++){
			que.pop();
			cin>>num;
			sum+=num;
			ans=max(ans,sum);
			sum-=que.front();
			que.push(num);
		}
		cout<<ans<<endl;
	}
}