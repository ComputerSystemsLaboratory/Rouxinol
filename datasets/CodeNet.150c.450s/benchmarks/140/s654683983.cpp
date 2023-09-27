#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Node{
public:
    int parent, rank;
    Node(int i): parent(i), rank(0){}
};

bool sortFunc(const vector<int>& A, const vector<int>& B){
    return A[2] < B[2];
}

int find(vector<Node>& nodes, const int& x){
    if(nodes[x].parent != x){
        int p = find(nodes, nodes[x].parent);
        nodes[x].parent = p;
    }
    return nodes[x].parent;
}

void unite(vector<Node>& nodes, const int& x, const int& y){
    int xp = find(nodes, x), yp = find(nodes, y);
    if(nodes[xp].rank > nodes[yp].rank){
        nodes[yp].parent = xp;
    }
    else if(nodes[yp].rank > nodes[xp].rank){
        nodes[xp].parent = yp;
    }
    else{
        nodes[xp].rank++;
        nodes[yp].parent = xp;
    }
}
int main(){
    int v, e, s, t, w;
    vector<Node> nodes;
    vector<vector<int>> edges;
    scanf("%d %d", &v, &e);
    for(int i = 0; i < v; i++){
        nodes.push_back(Node(i));
    }
    for(int i = 0; i < e; i++){
        scanf("%d %d %d", &s, &t, &w);
        edges.push_back(vector<int>{s, t, w});
    }
    sort(edges.begin(), edges.end(), sortFunc);
    int sum = 0;
    for(vector<int> edge: edges){
        if(find(nodes, edge[0]) == find(nodes, edge[1])) continue;
        sum += edge[2];
        unite(nodes, edge[0], edge[1]);
    }
    printf("%d\n", sum);
}

