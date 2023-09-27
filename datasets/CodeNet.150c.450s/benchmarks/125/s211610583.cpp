#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

#define NUM 101
int node_num;
int V[NUM + 1][NUM + 1];
int d[NUM + 1];
int f[NUM + 1];
string color[NUM + 1];
int t;
int pos;
stack<int> s;

void createAdj(int n){
    for(int j = 0; j <= n; j++){
        if(j == 0){
            V[0][j] = 0;
        }
        V[0][j] = 1;
    }

    for(int i = 1; i < NUM; i++){
        for(int j = 1; j < NUM; j++){
            V[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        int num1;
        scanf("%d", &num1);

        int n;
        scanf("%d", &n);

        int num2;
        for(int j = 0; j < n; j++){
            scanf("%d", &num2);
            V[num1][num2] = 1;
        }
    }
}

int search(int n){
    for(int i = 1; i <= node_num; i++) {
        if(V[n][i] == 1 && color[i] == "white")
            return i;
    }
    return -1;
}

void dfs_init(){
    t = 0;
    for(int i = 0; i < NUM; i++){
        color[i] = "white";
    }
}

void dfs(){
    s.push(0);
    pos = 0;
    color[0] = "grey";
    d[0] = t;

    while(s.size()){
        int u = s.top();
        int next_node = search(u);
        if(next_node != -1){
            pos = next_node;
            s.push(next_node);
            pos = next_node;
            t++;
            color[next_node] = "grey";
            d[next_node] = t;
        }else{
            s.pop();
            color[u] = "black";
            t++;
            f[u] = t;
        }
    }
}

void print(){
    for(int i = 1; i <= node_num; i++){
        printf("%d %d %d\n", i, d[i], f[i]);
    }
}

int main(void){
    scanf("%d", &node_num);
    createAdj(node_num);

    dfs_init();
    dfs();

    print();
}

