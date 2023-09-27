#include<bits/stdc++.h>
using namespace std;
map<string,int> Map;
string str,ans="";
signed main(void){
	ios::sync_with_stdio(false);
	while(cin>>str){
		Map[str]++;
		if(str.length()>ans.length())
			ans=str;
	}
	int maxn=0;
	for(map<string,int>::iterator it=Map.begin();it!=Map.end();++it)
		maxn=max(maxn,(int)it->second);
	for(map<string,int>::iterator it=Map.begin();it!=Map.end();++it)
		if(maxn==(int)it->second){
			cout<<it->first<<" ";
			break;
		}
	cout<<ans<<endl;
}