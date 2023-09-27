#include<bits/stdc++.h>
using namespace std;
string s;
stack<int>le;// \角? 
stack<pair<int,int> >stk;// /角?，面? 
void solve(){
	int res=0,K=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='\\'){
			le.push(i);
		}else if(s[i]=='/'&&!le.empty()){
			int j=le.top();
			int space=i-j;
			le.pop();
			while(!stk.empty()&&stk.top().first>j){
				space+=stk.top().second;
				stk.pop();
			}
			stk.push(make_pair(i,space));
		}
	}
	vector<int> v;
	while(!stk.empty()){
		v.push_back(stk.top().second);
		res+=stk.top().second;
		stk.pop();
	}
	reverse(v.begin(),v.end());
	printf("%d\n",res);
	if(v.size()!=0){
		printf("%d ",v.size());
		for(int i=0;i<(int)v.size()-1;i++){
			printf("%d ",v[i]);
		}printf("%d\n",v[v.size()-1]);
	}else printf("0\n");
}
int main(){
//	freopen("a.txt","r",stdin);
	cin>>s;	
	solve();
	return 0;
}