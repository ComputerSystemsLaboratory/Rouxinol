#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;
 
struct status{
    int idx_node;
    vector<int> children;
    int visited = 0;
    int depth = -1;
};
 
deque<int> schedule; 
vector<status> graph;

int depth = 1;
void bfs(){
    if (schedule.size()>1){
        
        int now_node = schedule.front();
        schedule.pop_front();
        
        switch(now_node){
            case 0: {
                ++depth;
                schedule.push_back(0);
                break;
            }
            default: {
                for(auto& next_node:graph[now_node-1].children){
                    if(graph[next_node-1].visited) continue;
                    
                    graph[next_node-1].visited = 1;
                    graph[next_node-1].depth = depth;  
                    schedule.push_back(next_node);
                }
            }
        }
        bfs();
    }
}
 

int main(void){cin.tie(0);ios::sync_with_stdio(false);
 
    //stdi
    int nb_nodes; cin >> nb_nodes;
    graph.resize(nb_nodes);
    for(auto& times:graph){
        int idx_node; cin >> idx_node; graph[idx_node-1].idx_node = idx_node;
        int nb_edges; cin >> nb_edges; graph[idx_node-1].children.resize(nb_edges);
        for(auto& a:graph[idx_node-1].children){
            cin >> a;
        }
        sort(graph[idx_node-1].children.begin(),graph[idx_node-1].children.end());
    }
    
    //bfs
    schedule.push_back(1);
    schedule.push_back(0);
    bfs();
    graph[1-1].depth = 0;
     
    //stdo
    for(auto& a:graph){
        cout<<a.idx_node<<" "
            <<a.depth<<"\n";
    }
}