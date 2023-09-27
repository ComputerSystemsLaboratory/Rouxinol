#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;

int main(int argc,char* argv[]){
  int dis[101],flag[101];
  vector<queue<int> > vec(101);
  int n,id,cnt,x,val=0;

  memset(dis,255,sizeof(dis));
  memset(flag,0,sizeof(flag));

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>id>>cnt;
    queue<int> tmp;
    for(int l=0;l<cnt;l++){
      cin>>x;
      tmp.push(x);
    }
    vec[id]=tmp;
  }

  queue<int> que;
  que.push(1);
  while(!que.empty()){
    queue<int> tmp=que;
    while(!que.empty())
      que.pop();
    int p;

    while(!tmp.empty()){
      p=tmp.front();tmp.pop();
      if(dis[p]==-1)
	dis[p]=val;

      while(!vec[p].empty()){
	que.push(vec[p].front());
	vec[p].pop();
      }
    }
    val++;
  }

  for(int i=1;i<=n;i++)
    printf("%d %d\n",i,dis[i]);

  return 0;
}