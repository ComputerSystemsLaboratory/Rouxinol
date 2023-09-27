#include <iostream>
#include <vector>
#include <climits>
#include <functional>
//#include <utility>

#include <queue>

using namespace std;

void get_map();
void dijkstra(int start);
struct edge
{
  int to;
  int weight;
};

const int INF = INT_MAX/3;
const int MAX_V = 500000;
vector<edge> g[100000];
bool visited[MAX_V];
int dist[MAX_V];
int vertex;
int start;

int main()
{
  get_map();
  dijkstra(start);
  for(int i=0;i<vertex;i++)
    {
      if(visited[i]==false)
	{
	  cout << "INF" << endl;
	}
      else
	{
      cout << dist[i] << endl;
	}
    }
  return 0;
}


bool operator>(edge r1, edge r2)
{
  return r1.weight > r2.weight;
}



void dijkstra(int start)
{
    priority_queue<edge, vector<edge>, greater<edge> > q;
    q.push({start,0});

    while(!q.empty())
      {
	edge r = q.top();
	q.pop();

	if(visited[r.to]==false)
	  {
	    visited[r.to]=true;
	    dist[r.to]=r.weight;

	    for(int i=0;i<g[r.to].size();i++)
	      {
		if(visited[g[r.to][i].to]==false)
		  {
		    q.push({g[r.to][i].to, g[r.to][i].weight+dist[r.to]});
		  }
	      }
	  }
	
      }
}

void get_map()
{
  int edge;
  cin >> vertex >> edge >> start;

  for(int i=0;i<edge;i++)
    {
      int from, to, weight; 
      cin >> from >> to >> weight;
      g[from].push_back({to , weight});
    }
  
  for(int i=0;i<MAX_V;i++)
    {
      dist[i]=INF;
    }
  
}