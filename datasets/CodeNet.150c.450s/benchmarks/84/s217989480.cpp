#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<functional>
#include<algorithm>
#include<stack>
#include<queue>
#include<iomanip>
#include<set>
#include<map>
#include<utility>
#include<string>
#include<vector>

using namespace std;

#define LL long long

struct BIT{//1-indexed
	vector<int> bit;
	BIT(int n, int i):bit(n,i){}
	void add(int now, int val){
		for(int i=now; now<bit.size(); now+=(now&-now))
			bit[now]+=val;
		return;
	}
	int sum(int now){
		int ret=0;
		for(int i=now; now>0; now-=(now&-now))
			ret+=bit[now];
		return ret;
	}
};

LL n,a[200002],st[200002],ans=0;
map<int,int>key;

int main() {
	cin>>n;
	BIT bt(n+1,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
		st[i]=a[i];
	}
	sort(st,st+n);
	for(int i=0;i<n;i++)key[st[i]]=i+1;
	for(int i=0;i<n;i++){
		ans+=i-bt.sum(key[a[i]]);
		bt.add(key[a[i]],1);	
	}
	cout<<ans<<endl;
	return 0;
}
