#include <iostream>
#include <set>
#include <map>
#include <queue>
using namespace std;
int main(void){
  int a,b,n;
  while(cin>>a>>b,a||b){
    cin>>n;
    vector<vector<int> > keiro(b);
    for(int i=0;i<b;++i){
    	keiro[i].reserve(a);
    	for(int j=0;j<a;++j)keiro[i][j]=0;
    }
    set<pair<int,int> > stop;
    for(int i=0,x,y;i<n;++i){
      cin>>x>>y;
      stop.insert(make_pair(x,y));
    }
    priority_queue<pair<int,int> > q;
    q.push(make_pair(1,1));
    while(!q.empty()){
      pair<int,int> tmp=q.top();q.pop();
      if(stop.find(tmp)!=stop.end()) continue;
      int x=tmp.first,y=tmp.second;
      if(x>a||y>b) continue;
      ++keiro[y-1][x-1];
      q.push(make_pair(x+1,y));
      q.push(make_pair(x,y+1));
    }
    cout<<keiro[b-1][a-1]<<endl;
  }
  return 0;
}