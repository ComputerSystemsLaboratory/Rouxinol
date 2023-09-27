#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#define MAX 100
#define INF (1<<30)

using namespace std;
enum state{
  BLACK,
  WHITE
};

int main(){
  vector<int> v[MAX];
  vector<int> c[MAX];
  state s[MAX];
  int d[MAX];
  int n; cin>>n;

  for(int i=0;i<n;i++){
    int u; cin>>u;
    int k; cin>>k;
    for(int j=0;j<k;j++){
      int tmp,tmp2; cin>>tmp>>tmp2;
      v[u].push_back(tmp);
      c[u].push_back(tmp2);
    }
  }

  for(int i=0;i<n;i++){
    s[i] = WHITE;
    d[i] = INF;
  }
  s[0]=BLACK;
  d[0]=0;

  vector<int> blacklist;
  blacklist.push_back(0);

  while(1){
    int& last = blacklist.back();
    for(int i = 0;i<v[last].size();i++){
      if(d[v[last][i]]>d[last]+c[last][i]){
        d[v[last][i]]=d[last]+c[last][i];
      }
    }

    int minv=-1;
    int mind=INF;
    for(int b:blacklist){
      for(int i=0;i<v[b].size();i++){
        if(s[v[b][i]]!=BLACK && d[v[b][i]]<mind){
          minv=v[b][i];
          mind=d[v[b][i]];
        }
      }
    }
    if(minv!=-1){
      s[minv]=BLACK;
      blacklist.push_back(minv);
    }else{
      break;
    }
  }

  for(int i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}