#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxn=999999+10;
int n,cnt,t;
int pre[maxn],prime[maxn];
int get(int x){
	int l=0,r=t-1,mid;
	while(l<=r){
		mid=(l+r)>>1;
		if(prime[mid]>=x)
			r=mid+1;
		else
			l=mid+1;
	}
	return r;
}
int main(){
	memset(pre,0,sizeof(pre));
	memset(prime,0,sizeof(prime));
	t=1;
	for(int i=2;i<maxn;i++){
		if(!pre[i])
			prime[t++]=i;
		for(int j=1;j<=t&&i*prime[j]<maxn;j++){
			pre[prime[j]*i]=prime[j];
			if(i%prime[j]==0)
				break;
		}
	}
	while(cin>>n){
		int ans=0;
		while(prime[ans]<=n)
			ans++;
		cout<<ans-1<<endl;
	}
	return 0;
}