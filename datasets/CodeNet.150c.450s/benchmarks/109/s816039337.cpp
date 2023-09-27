#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;

int sec(int h,int m,int s){
	return (h*60+m)*60+s;
}
int main(){
	int n;
	while(cin>>n,n){
		map<int,int> mp;
		map<int,int>::iterator it;
		int ans=0;
		for(int i=0;i<n;i++){
			int h,m,s;
			scanf("%d:%d:%d",&h,&m,&s);
			++mp[sec(h,m,s)];
			scanf("%d:%d:%d",&h,&m,&s);
			--mp[sec(h,m,s)];
		}
		int use=0;
		for(it=mp.begin();it!=mp.end();++it){
			use += it->second;
			ans = max(ans,use);
		}
		cout<<ans<<endl;
	}
	return 0;
}