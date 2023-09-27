#include <iostream>
#include <algorithm>
#include <vector>
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
  int n;
  edge *firstedge;
  vertice();
};
vertice vertices[NV];
vertice::vertice()
{
}


void create_edge(int s, int t,int d)
{
  edge *newedge=new edge(t,d);
  if(vertices[s].firstedge==NULL)
    vertices[s].firstedge=newedge;
  else
  {
    edge *tmp=vertices[s].firstedge;
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
  vector<source> weight(v);
  for(int i=0;i<v;i++)
  {
    vertices[i].n=i;
    vertices[i].firstedge=NULL;
    weight[i].n=i;
    weight[i].dis=INF;
  }
  for(int i=0;i<e;i++)
  {
    int s,t,d;
    cin>>s>>t>>d;
    create_edge(s,t,d);
  }
/*
  for(int i=0;i<v;i++)
  {
    edge *p=vertices[i].firstedge;
    while(p!=NULL)
    {
      cout<<i<<' '<<p->t<<' '<<p->d<<endl;
      p=p->nextedge;
    }
  }
*/
  weight[r].dis=0;
  int current_vertex=r;
  priority_queue<source> queue;
  queue.push(weight[r]);
  while(queue.size()!=0)
  {
    source del=queue.top();
    queue.pop();
    current_vertex=del.n;
//    cout<<current_vertex<<endl;
    edge *p=vertices[current_vertex].firstedge;
    while(p!=NULL)
    {
      int vn=p->t;
      if(weight[vn].dis>weight[current_vertex].dis+p->d)
      {
        weight[vn].dis=weight[current_vertex].dis+p->d;
        queue.push(weight[vn]);
      }
//      cout<<vn<<' '<<weight[vn].dis<<' '<<weight[current_vertex].dis<<' '<<p->d<<endl;
      p=p->nextedge;
    }
  }
  for(int i=0;i<v;i++)
    if(weight[i].dis>=INF)
      cout<<"INF"<<endl;
    else
      cout<<weight[i].dis<<endl;
}