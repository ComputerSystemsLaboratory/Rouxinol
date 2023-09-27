
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=1e5+5;

typedef long long LL;

int n,k,s[maxn];

int res(LL p)
{
	int i=0;
	for(int j=0;j<k;j++){
		LL temp=0;
		while(temp+s[i]<=p){
			temp+=s[i];
			i++;
			if(i==n){
				return n;
			}
		}
	}
	return i;
}

LL solve()
{
	LL left=0,right=100000*10000,mid;
	while(left<right){
		mid=left+((right-left)>>1);
		int v=res(mid);
		if(v>=n){
			right=mid;
		}else{
			left=mid+1;
		}
	}
	return right;
}

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	LL ans=solve();
	cout<<ans<<endl;
	return 0;
}
/*
5 3
8 
1 
7
3
9
*/
