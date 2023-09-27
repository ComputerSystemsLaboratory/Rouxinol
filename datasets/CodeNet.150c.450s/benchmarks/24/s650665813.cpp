#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m,n){
    int a,b,ans=0;
    priority_queue< pair<int,int> > c;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      c.push(make_pair(b,a));
    }
    while(!c.empty()){
      if(c.top().second>m){
        c.push(make_pair(c.top().first,c.top().second-m));
        c.pop();
        break;
      }
      else {
        m-=c.top().second;
        c.pop();
      }
    }
    while(!c.empty()){
      ans+=c.top().first*c.top().second;
      c.pop();
    }
    cout<<ans<<endl;
  }
  return 0;
}