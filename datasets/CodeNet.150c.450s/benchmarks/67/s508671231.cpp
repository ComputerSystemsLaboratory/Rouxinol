#include <bits/stdc++.h>
using namespace std;
int serch(int num,int n)
{
	for(int i=1,now=num;now<=n&&num-i>0;i++){
		now+=num-i;
		if(now==n)return 1;
		if(now>n)return 0;
	}
	return 0;
}
int main() {
	int n;
	while(cin>>n,n){
		int ans=0;
		for(int i=n/2+1;i>0;i--)ans+=serch(i,n);
		cout<<ans<<endl;
	}
}