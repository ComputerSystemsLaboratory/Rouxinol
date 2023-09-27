#include<bits/stdc++.h>
using namespace std;

int main(){
while(1){
int n;
cin>>n;
if(n==0)break;
vector<int> sum(n+1,0);
for(int i=1;i<=n;i++){
	int a;
	cin>>a;
	sum[i]=sum[i-1]+a;
}
int ans=sum[1];
for(int i=0;i<=n;i++){
	for(int j=i+1;j<=n;j++){
	ans=max(ans,sum[j]-sum[i]);
	}
}
cout<<ans<<endl;
}

return 0;
}

