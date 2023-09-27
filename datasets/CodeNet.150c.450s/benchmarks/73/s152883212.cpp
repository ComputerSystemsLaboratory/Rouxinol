#include <bits/stdc++.h>
using namespace std;
int bit[100000];
int n;
void add(int a,int x){
	while(a<=n){
		bit[a]+=x;
		a+=a&-a;
	}
}
int sum(int a){
	int ans=0;
	while(a){
		ans+=bit[a];
		a-=a&-a;
	}
	return ans;
}
int main(){
	int q;	cin>>n>>q;
	while(q--){
		int c,x,y;	cin>>c>>x>>y;
		if(c==0)	add(x,y);
		else if(c==1)	cout<<sum(y)-sum(x-1)<<endl;
	}
	return 0;
}