#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,q,time=0;
  cin>>n>>q;
  queue<pair<string,int> > qsi;
  for(int i=0;i<n;i++){
    string str;
    int t;
    cin>>str>>t;
    qsi.push(make_pair(str,t));
  }
  pair<string,int> now;
  while(!qsi.empty()){
    now=qsi.front();
    qsi.pop();
    if(now.second<=q){
      time+=now.second;
      cout<<now.first<<" "<<time<<endl;
    }else if(now.second>q){
      time+=q;
      qsi.push(make_pair(now.first,(now.second-q)));
    }
  }
  return 0;
}