#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin>>n,n){
		int ans=0;
		for(int i=n/2+1;i>1;i--){
			for(int j=i-1,now=i;j>0&&now<n;j--){
				now+=j;
				if(now==n)ans++;
			}
		}
		cout<<ans<<endl;
	}
}