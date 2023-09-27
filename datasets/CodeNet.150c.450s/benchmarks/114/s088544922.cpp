#include <iostream>
#include <vector>
#include <queue>
#define to first
#define cost second
const int inf=1e9+7;
using namespace std;
int main(){

  int n,tmp,r=0,flag[100]={},v=0;
  cin>>n;
  vector <pair<int,int> > gl[n];
  priority_queue <pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> > >q;
  //for(int i=1;i<n;i++) mincost[i]=inf;                                                                                                                                                       

  for(int i=0;i<n;i++) for(int j=0;j<n&&cin>>tmp;j++) if(tmp!=-1) gl[i].push_back(make_pair(j,tmp));
  int now=0;
  for(int j=0;j<n-1;j++){
    for(int i=0;i<gl[now].size();i++) if(!flag[gl[now][i].to]) q.push(make_pair(gl[now][i].cost,gl[now][i].to));
    flag[now]=1;
    for(;flag[q.top().second];) q.pop();
    //if(q.empty()) break;                                                                                                                                                                     
    r+=q.top().first;
    now=q.top().second;
    q.pop();
  }
  cout<<r<<endl;
  return 0;

}