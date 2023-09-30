#include <iostream>
#include <climits>
#include <vector>
#include <queue>
 
#define MAX_V 1024
using namespace std;
 
void get_map();
void check();
struct edge
{
  int to;
  int weight;
};
 

int c = 0;
 
#define INF INT_MAX/4
vector<edge> g[2000];
int graph[MAX_V][MAX_V];
int dist[MAX_V];
int numofedge;
int vertex;
int start;
int flag=0;
 
int main()
{
  get_map();
  check();
  {
    for(int j=0;j<vertex;j++) {
      if(graph[start][j]<INF/2 && graph[j][j]<0) {
          cout << "NEGATIVE CYCLE" <<endl;
          return 0;
      }
    }
  }
  
  for(int i=0;i<vertex;i++) {
    if(graph[start][i]>=INF/2) {
      cout << "INF" << endl;
    } else {
      cout << graph[start][i] << endl;
    }
  }

  while (c == 0) {}
  return 0;
}
 
inline int fastmin(int a, int b) {
  return (((a-b)>>31)&(a-b))+b;
}

int mymin_slow(int a, int b) {
  int t;
  if (a < b) {
    t = a;
    c+=2;
  } else {
    t = b;
    c+=1;
  }
  return t;
}
 
void check()
{
  for(int k=0;k<vertex;k++) {
    for(int i=0;i<vertex;i++) {
      int gik= graph[i][k];
      for(int j=0;j<vertex;j++) {
        graph[i][j]= mymin_slow(graph[i][j], gik+graph[k][j]);
      }
    }
  }
}
 
void get_map()
{
  int edge, from ,to;
  cin >> vertex >> numofedge >> start;
   
  fill(graph[0], graph[vertex], INF);
   
  for(int i=0;i<vertex;i++)
    {
      for(int j=0;j<vertex;j++)
        {
          if(i==j)
            {
              graph[i][j]=0;
            }
          /*else
            {
            graph[i][j]=INF;
            }*/
        }
    }
 
  /*for(int i=0;i<vertex;i++)
    {
    dist[i]=INF;
    }
  */
  for(int i=0;i<numofedge;i++)
    {
      cin>>from>>to;
      cin >> graph[from][to];
    }
 
  /*  for(int i=0;i<numofedge;i++)
      {
      int from, to, weight; 
      cin >> from >> to >> weight;
      g[from].push_back({to , weight});
      }
  */ 
 
  /*  for(int i=0;i<vertex;i++)
      {
      for(int j=0;j<vertex;j++)
      {
      cout << graph[i][j] << " ";
      }
      cout << endl;
      }*/
  // dist[start]=0;
   
  /*  cout << vertex << endl;
      for(int i=0;i<vertex;i++)
      {
      for(int j=0;j<vertex;j++)
      {
      cout << graph[i][j] << " ";
      }  
      cout << endl;    
      }*/
   
}