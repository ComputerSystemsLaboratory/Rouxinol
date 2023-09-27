#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<algorithm>
using namespace std;
struct node{
  int key;
  int cost;
  struct node *next;
};
typedef struct node *GG;
  
GG G[100001];
GG MNode(int,int,GG);
void Insert(int,int,int);
priority_queue<pair<int,int> > PQ;
int main()
{
  int i,j,n,count=0,v,c,c1,v1,e,r;
  long long color[100001],d[100001],mincost,ii;
  pair<int,int> u;
  GG GGG;
  scanf("%d%d%d",&v,&e,&r);
  for(i=0;i<v;i++)G[i]=MNode(0,0,NULL);
  for(i=0;i<e;i++){
    scanf("%d%d%d",&n,&v1,&c1);
    Insert(n,v1,c1);
  }
  for(i=0;i<v;i++){
    color[i]=0;
    d[i]=1000000001;
  }
  d[r]=0;
  PQ.push(make_pair(0,r));
  while(!PQ.empty()){
    u=PQ.top();PQ.pop();
    mincost=(-1)*u.first;
    ii=u.second;
    color[ii]=2;
    for(GGG=G[ii]->next;GGG!=NULL;GGG=GGG->next){
      if(color[GGG->key]!=2 && (GGG->cost+d[ii])<d[GGG->key]){
	d[GGG->key]=GGG->cost+d[ii];
	color[GGG->key]=1;
	PQ.push(make_pair(d[GGG->key]*(-1),GGG->key));
      }
    }
  }
  for(i=0;i<v;i++){
    if(d[i]!=1000000001)printf("%d\n",d[i]);
    else printf("INF\n");
  }
  return 0;
}
  
GG MNode(int key,int cost,GG Node)
{
  GG n;
  n=(GG)malloc(sizeof(struct node));
  n->key=key;
  n->cost=cost;
  n->next=Node;
  return n;
}
void Insert(int s,int t,int u)
{
  GG GGG;
  GGG=MNode(t,u,G[s]->next);
  G[s]->next=GGG;
}