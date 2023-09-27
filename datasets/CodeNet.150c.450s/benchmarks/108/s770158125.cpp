#include<bits/stdc++.h>

using namespace std;

typedef struct node_{
    int id;
    int d;
    int k;//出次数
    int visited;
    vector<int> v;
}* node;

int main(){
    int n;
    scanf("%d", &n);
    vector<node> graph;
    node dummy;
    graph.push_back(dummy);
    for(int i = 1; i <= n; i++){
        node nd = new node_;
        nd -> d = -1;
        nd -> visited = 0;
        int id, k;
        scanf("%d %d", &id, &k);
        nd -> id = id;
        nd -> k = k;
        for(int i = 0; i < k; i++){
            int v1;
            scanf("%d", &v1);
            nd -> v.push_back(v1);
        }
        graph.push_back(nd);
    }
    graph[1] -> d = 0;

    queue<int> q;
    q.push(1);
    while(q.empty() != 1){
        int num = q.front();
        q.pop();
        node nd = graph[num];
        for(int i = 0; i < nd -> k; i++){
            if(graph[nd -> v[i]] -> d < 0){
                graph[nd -> v[i]] -> d = nd -> d + 1;
                q.push(nd -> v[i]);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        node nd = graph[i];
        printf("%d %d\n", nd -> id, nd -> d);
    }
    return 0;
}
