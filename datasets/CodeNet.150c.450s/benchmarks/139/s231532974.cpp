#include<bits/stdc++.h>
#define ll long long
const int N=2e5+7;
using namespace std;
int s[N],n,m;
vector<int >v[N];
queue<int >q;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
    	int a,b;
    	cin>>a>>b;
    	v[a].push_back(b);
    	v[b].push_back(a);
	}
	s[1]=0;
	for(int i=0;i<v[1].size();i++){
		q.push(v[1][i]);
		s[v[1][i]]=1;
	}
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(int i=0;i<v[p].size();i++){
		    if(s[v[p][i]]==0&&v[p][i]!=1){
		    	q.push(v[p][i]);
		    	s[v[p][i]]=p;
			}
		}
	}
	int f=1;
	for(int i=2;i<=n;i++)
		if(s[i]==0) {f=0;break;}
	if(f==1){
		cout<<"Yes"<<endl;
		for(int i=2;i<=n;i++) 
		    cout<<s[i]<<endl;
	}
	else cout<<"No";
	return 0;
}