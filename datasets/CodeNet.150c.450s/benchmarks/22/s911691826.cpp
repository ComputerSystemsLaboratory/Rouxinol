/*In this problem we have to find Shortest Path from a given source to all other nodes but edge can contian negative edge
  
  Now , in we can't use dijkstras becuase (EXPLAIN)- 

Thus we use dijkstras algo given below*/


/*  	TO-DO - 
	1. MAKE COMMENTS 
	2. Understand the proof
	3. Record it in problem solved folder
	4. search - why dijkstra doesn't work with negative weights
	5. search - (not only detect but print) shortest path in graph with negative cycle
	6. search - does bellmanford & dijistra work on undirected graph*/

/*	This algo is 

	SOURCE -
    https://www.youtube.com/watch?v=FtN3BYH2Zes     - (understand algo)
	
*/
	

#include<bits/stdc++.h>
using namespace std;

#define MAXN 100001

bool relaxAllEdges(int s, vector< pair<int, int> >& edges, long dist[])
{
    int len = edges.size();
    //printf("%d ",len);
    bool ans = 0;
    for(int i = 0 ; i < len ; i++)
    {
        int weight_i = edges[i].second, vertex_i = edges[i].first;
        long new_path = dist[s] + weight_i;
        if(dist[s] < LONG_MAX && new_path < dist[vertex_i])
        {
            dist[vertex_i] = new_path;
            ans = 1;
        }
    }
    return ans;
}

int bellmanFord(int s, vector< pair<int, int> > adj[], int n, long dist[])
{
    int n_cpy = n, relaxed = 1;
    while(n_cpy-- && relaxed)
    {
        relaxed = 0;//this counts the number of nodes "from which even edge is relaxed"
        //this loop is to process each node
        for(int i = s, cnt = 0 ; cnt < n ; i = (i+1) % n, cnt++)
            relaxed += relaxAllEdges(i, adj[i], dist);
    
    }
    
    return (relaxed ? 1 : 0);
}

int main()
{
	int n, s, e1, e2, w, i, num_edge, ans = 0, neg_cycle;
	long dist[MAXN];
	bool vis[MAXN] = {0};
	
	scanf("%d %d %d", &n, &num_edge, &s);
	
	vector< pair<int, int> > graph[n+1];//Adjacency list for storing graph
	for(i = 0 ; i < num_edge ; i++)
	{	
        scanf("%d %d %d",&e1, &e2, &w);
        graph[e1].push_back({e2, w});
	}
    
    //Initial distance is INF
    for(i = 0; i < n ; i++)
        dist[i] = LONG_MAX;
        
    //initalize the que with s and which is ditance 0 to itself
    dist[s] = 0;
    neg_cycle = bellmanFord(s, graph, n, dist);
    
    if(neg_cycle)
    {
        printf("NEGATIVE CYCLE\n");
        return 0;
    }
    for(i = 0 ; i < n ; i++)
	{
		if(dist[i] == LONG_MAX)
			printf("INF\n");
		else
			printf("%ld\n", dist[i]);
	}
}
