#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>

#define MAX 100001
#define NIL -1

using namespace std;

vector<int> G[MAX];
int n,e;
int Type[MAX];
int tt = 0;

void DFS(int i,int type){
    if (Type[i] != 0) return;
    Type[i] = type;
    for (int j = 0; j < G[i].size(); j++) {
            DFS(G[i][j],type);
    }
}

void DFS_Man(){
    for (int i = 0; i < n; i++) {
        if (Type[i] == 0) {
            tt++;
            DFS(i,tt);
        }
    }
}

int main(){
    cin >> n >> e;
    for (int i = 0; i < n; i++) Type[i] = 0;
    for (int i = 0; i < e; i++) {
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    DFS_Man();
    
    int com;
    
    cin >> com;
    for (int i = 0; i < com; i++) {
        int a1,a2;
        cin >> a1 >> a2;
        if (Type[a1] == Type[a2]) {
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    
    return 0;
}