#include<bits/stdc++.h>
using namespace std;

typedef pair<string,int>P;
int main(){
  int n,t;
  string names;
  int time,st=0;
  queue<P>que;
  cin>>n>>t;
  for(int i=0;i<n;i++){
    cin>>names>>time;
    que.push(P(names,time));
 }
  while(!que.empty()){
    P p=que.front(); que.pop();
    names=p.first;
    time=p.second;
    if(t<time){
      time-=t;
      st+=t;
      que.push(P(names,time));
    }
    else {
      st+=time;
      cout<<names<<" "<<st<<endl;
    } 
  }
}