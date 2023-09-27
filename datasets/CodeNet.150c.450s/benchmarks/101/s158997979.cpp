#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,s,t,d[100000];
  vector<int>l[100000];
  cin>>n>>m;
  for(int i=0;i<n;i++)d[i]=-1;
  for(int i=0;i<m;i++){
    cin>>s>>t;
    l[s].push_back(t);
    l[t].push_back(s);
  }
  queue<int> q;
  for(int i=0;i<n;i++){
    if(d[i]==-1){
      q.push(i);
      while(!q.empty()){
	int from=q.front();
	q.pop();
	if(d[from]==-1){
	  d[from]=i;
	  for(int j=0;j<l[from].size();j++)q.push(l[from][j]); 
	}
      }
    }    
  }
  int Q;
  cin>>Q;
  for(int i=0;i<Q;i++){
    cin>>s>>t;
    if(d[s]==d[t])cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}