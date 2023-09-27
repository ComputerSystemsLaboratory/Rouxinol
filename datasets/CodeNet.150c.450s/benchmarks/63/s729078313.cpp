#include <iostream>
#include <queue>
#define INF 1000000000
#define NV 100000
using namespace std;
class edge
{
  public:
  int t;
  int d;
  edge *nextedge;
  edge(int,int);
};

edge::edge(int tt,int dd)
{
  t=tt;
  d=dd;
  nextedge=NULL;
}

class vertice
{
  public:
  edge *firstedge;
  void create_edge(int,int);
};

void vertice::create_edge(int t,int d)
{
  edge *newedge=new edge(t,d);
  if(firstedge==NULL)
    firstedge=newedge;
  else
  {
    edge *tmp=firstedge;
    while(tmp->nextedge!=NULL)
    {
      tmp=tmp->nextedge;
    }
    tmp->nextedge=newedge;
  }
}

class source
{
  public:
  int n;
  int dis;
  friend bool operator<(source,source);
};

bool operator<(source a, source b)
{
  return a.dis>b.dis;
}

int main()
{
  int v,e,r;
  cin>>v>>e>>r;
  source weight[v];
  vertice vertices[v];
  for(int i=0;i<v;i++)
  {
    vertices[i].firstedge=NULL;
    weight[i].n=i;
    weight[i].dis=INF;
  }
  for(int i=0;i<e;i++)
  {
    int s,t,d;
    cin>>s>>t>>d;
    vertices[s].create_edge(t,d);
  }
  weight[r].dis=0;
  int current_vertex=r;
  priority_queue<source> queue;
  queue.push(weight[r]);
  while(queue.size()!=0)
  {
    source del=queue.top();
    queue.pop();
    current_vertex=del.n;
    edge *neighbor=vertices[current_vertex].firstedge;
    while(neighbor!=NULL)
    {
      int vn=neighbor->t;
      if(weight[vn].dis>weight[current_vertex].dis+neighbor->d)
      {
        weight[vn].dis=weight[current_vertex].dis+neighbor->d;
        queue.push(weight[vn]);
      }
      neighbor=neighbor->nextedge;
    }
  }
  for(int i=0;i<v;i++)
    if(weight[i].dis>=INF)
      cout<<"INF"<<endl;
    else
      cout<<weight[i].dis<<endl;
}