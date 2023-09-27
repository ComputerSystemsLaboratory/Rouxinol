#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>

#define INF 2000000001
#define MAX 101
#define NIL -1

using namespace std;

typedef struct {
    int toid;
    int far;
} PATH;

vector<PATH> D[MAX];
int N;
int Dist[MAX];

void dijkstra(){//0??????????????¢??????????????£?????????
    
    bool complete[MAX];
    vector<int> S;
    
    for (int i = 0; i < N; i++) {
        complete[i] = false;
        Dist[i] = INF;
    }
 
    //???????¨????
    Dist[0] = 0;
    S.push_back(0);
    int u=0,minf;
    complete[u] = true;
    
    while (1) {
        if (S.size() == N) break;
        
        //????????????
        for (int j = 0; j < D[S[u]].size(); j++) {
            if (!complete[D[S[u]][j].toid] && Dist[S[u]] + D[S[u]][j].far < Dist[D[S[u]][j].toid]) {
                Dist[D[S[u]][j].toid] = Dist[S[u]] + D[S[u]][j].far;
            }
        }
        
        
        
        u = NIL;
        minf = INF;
        
        //?¨??????´??°
        for (int i = 0; i < S.size(); i++) {
            
            for (int j = 0; j < D[S[i]].size(); j++) {
                if (Dist[D[S[i]][j].toid] < minf && !complete[D[S[i]][j].toid]) {
                    minf = Dist[D[S[i]][j].toid];
                    u = D[S[i]][j].toid;
                }
            }
            
        }
        S.push_back(u);
        complete[u] = true;
        u = S.size()-1;//????????§u????????§??¨????????????????????????
    }
}

int main(){
    cin >> N;
    for (int i = 0; i < N; i++) {
        int bb1,bb2;
        cin >> bb1 >> bb2;
        for (int j = 0; j < bb2; j++) {
            PATH bb3;
            cin >> bb3.toid >> bb3.far;
            D[i].push_back(bb3);
        }
    }
    
    dijkstra();
    
    for (int i = 0; i < N; i++) {
        printf("%d %d\n",i,Dist[i]);
    }
    
    return 0;
}