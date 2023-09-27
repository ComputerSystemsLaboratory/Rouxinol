#include<bits/stdc++.h>
using namespace std;
map<int,int> Map;
signed main(void){
	ios::sync_with_stdio(false);
	int x,maxn=0;
	while(cin>>x)
		Map[x]++;
	for(map<int,int>::iterator it=Map.begin();it!=Map.end();it++)
		maxn=max(maxn,it->second);
	for(map<int,int>::iterator it=Map.begin();it!=Map.end();it++)
		if(it->second==maxn)
			cout<<it->first<<endl;
}