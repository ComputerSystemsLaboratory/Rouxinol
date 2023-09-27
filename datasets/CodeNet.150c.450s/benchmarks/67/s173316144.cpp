#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int sum=0,ans=0;
		for(int i=1;sum<=n;i++){
			sum+=i;
			if((n-sum)%(i+1)==0 && sum!=n)ans++;
		}
		cout<<ans<<endl;
	}
}