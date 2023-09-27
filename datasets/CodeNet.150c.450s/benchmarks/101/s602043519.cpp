#include<iostream> 
#include <list> 
#define N 100001
using namespace std; 
int n, loop;
int color=0;

int flag[N];

bool *visited = new bool[N];

class Graph{ 
    int V; 
    list<int> *adj; 
  
public: 
    void DFSUtil(int v); 
    Graph(int V);  
    void addEdge(int v, int w); 
    void connectedComponents(); 
}; 
  
void Graph::connectedComponents() { 
    for(int v = 0; v < V; v++){
        visited[v] = false; 
	}
  
    for (int v=0; v<V; v++) { 
        if (visited[v] == false) {
        	color++;
            DFSUtil(v); 
        } 
    } 
}
  
void Graph::DFSUtil(int v) 
{ 
    visited[v] = true;
    flag[v]=color;
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i){
        if(!visited[*i]){
            DFSUtil(*i); 
		}
	}
} 
  
Graph::Graph(int V) { 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) { 
    adj[v].push_back(w); 
    adj[w].push_back(v); 
} 

int main() {
  	int i, x,y,uji,j;
  	cin>>n>>loop;
	Graph g(n);
	 
	
	
  	for(i=0; i<loop; i++){
		cin>>x>>y;
		g.addEdge(x,y);
	}
	
	for(j= 0; j < n; j++){
	   visited[j] = false; 
	   flag[j]=0;
	}
	g.connectedComponents();
	
	cin>>uji;
	int prev=-1;
	for(i=0; i<uji; i++){
		cin>>x>>y;
		
		if(flag[y]==flag[x]){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
		prev=x;
	}
    return 0; 
} 
