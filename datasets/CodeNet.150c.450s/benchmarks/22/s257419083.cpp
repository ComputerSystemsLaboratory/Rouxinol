#include<cstdio>
#include<vector>
#include<map>
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

#define INF 100000000
typedef pair<int,int> P;
int v,e,r;
int s[1000000],t[1000000],d[10000000];
int vec[500000][3];
/*
   void dijkstra(){
   priority_queue<P,vector<P>,greater<P> > pq;
   pq.push(P(0,r));
   int res[v];
   fill(res,res+v,INF);
   res[r]=0;

   while(!pq.empty()){
   P tmp=pq.top(); pq.pop();
   if(tmp.first>res[tmp.second]) continue;
   for(int i=0;i<vec[tmp.second].size();i++){
   if(res[vec[tmp.second][i].first]>res[tmp.second]+vec[tmp.second][i].second){
   res[vec[tmp.second][i].first]=res[tmp.second]+vec[tmp.second][i].second;
   pq.push(P(res[vec[tmp.second][i].first],vec[tmp.second][i].first));
   }
   }
   }
   for(int i=0;i<v;i++){
   if(res[i]==INF) printf("INF\n");
   else  printf("%d\n",res[i]);
   }
   }

*/

void bellman(){
  int res[v];
  fill(res,res+v,INF);
  res[r]=0;

  for(int i=0;i<v;i++){
    bool update=false;

    for(int cookies=0;cookies<e;cookies++){

      if(res[vec[cookies][1]]>res[vec[cookies][0]]+vec[cookies][2] && res[vec[cookies][0]]!=INF){
        res[vec[cookies][1]]=res[vec[cookies][0]]+vec[cookies][2];
        update=true;
        if(i==v-1){ printf("NEGATIVE CYCLE\n"); return;}

      }
    }
    if(!update){
      for(int i=0;i<v;i++){
        if(res[i]==INF) printf("INF\n");
        else  printf("%d\n",res[i]);
      }
      return;
    }
  }
}

  int main(){
    scanf("%d%d%d",&v,&e,&r);
    for(int i=0;i<e;i++){
      scanf("%d%d%d",&vec[i][0],&vec[i][1],&vec[i][2]);
    }



    /*  for(int i=0;i<e;i++){
        s[i+e]=t[i];
        t[i+e]=s[i];
        d[i+e]=d[i];
        }
        */

    bellman();


    return 0;
  }