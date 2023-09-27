#include <stdio.h>
#include <vector>
#include <queue>
#define NUM 100000
#define NIL -1
using namespace std;

int node_num;
vector<int> v[NUM + 1];
queue<int> Q;
int color[NUM + 1];

bool is_connected(int a, int b){
    if(color[a] == color[b]){
        return true;
    }else{
        return false;
    }
}

void add_next(int n){
    for(int i = 0; i < v[n].size(); i++){
        if(color[v[n][i]] != NIL)
            continue;
        Q.push(v[n][i]);
        color[v[n][i]] = color[n];
    }
}

void bfs(){
    for(int i = 1; i <= node_num; i++){
        if(color[i] != NIL)
            continue;
        color[i] = i;
        Q.push(i);
        add_next(i);

        while(Q.size()){
            int top = Q.front();
            Q.pop();
            add_next(top);
        }
    }
    return;
}

void init(){
    for(int i = 0; i <= NUM; i++){
        color[i] = NIL;
    }
}

int main(void){
    init();

    int m;
    scanf("%d", &node_num);
    scanf("%d", &m);

    for(int i = 0; i < m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs();
     
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if(is_connected(a, b)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
}

