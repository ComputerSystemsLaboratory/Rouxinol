#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
#define INT(x) int x; scanf("%d",&x)
#define INPUT(x) scanf("%d",&x)
#define REP1(x,n) for(int x = 0; x < n; x++)
#define REP2(s,e) for(int x = s; x <= e; x++)
#define BR printf("\n")
#define INF 2000000000

// Node(parent)
int Node[10000] = {};

int same(int x, int y){
    int x_i = x,y_i = y;
    while (x_i != Node[x_i]) {
        x_i = Node[x_i];
    }
    while (y_i != Node[y_i]) {
        y_i = Node[y_i];
    }
    
    if (x_i - y_i) {
        return 0;
    }else{
        return 1;
    }
}

void unite(int x, int y){
    
    if (same(x,y) == 1) {
        return;
    }
    
    int x_i = x,y_i = y;
    while (x_i != Node[x_i]) {
        x_i = Node[x_i];
    }
    while (y_i != Node[y_i]) {
        y_i = Node[y_i];
    }
    
    Node[y_i] = x_i;
}

int main(){
    INT(n);
    INT(q);
    REP1(i,n) Node[i] = i;
    REP1(i,q){
        INT(com);INT(x);INT(y);
        if (com) {
            printf("%d\n",same(x,y));
        }else{
            unite(x,y);
        }
    }
    return 0;
}