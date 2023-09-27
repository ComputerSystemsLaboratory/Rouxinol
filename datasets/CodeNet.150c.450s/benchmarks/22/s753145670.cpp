#include <bits/stdc++.h>

/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
*/

#define INF 10e9
#define rep(i, a) for (int i = 0; i < (a); i++)
using namespace std;

typedef struct edge{
    long long int from;
    long long int to;
    long long int cost;
} edge;

int main(){
    long long int V, E, r;
    cin >> V >> E >> r;

    vector<edge> edges;
    long long int i;
    for(i = 0; i < E; i++){
        long long int s, t ,d;
        cin >> s >> t >> d;

        edge e;
        e.from = s;
        e.to = t;
        e.cost = d;
        edges.push_back(e);
    }

    long long int dist[V];
    for(i = 0; i < V; i++){
        dist[i] = INF;
    }

    dist[r] = 0;
    long long int count = 0;
    bool update;
    if(E == 0){
        update = false;
    }else{
        update = true;
    }
    
    while(update){
        count++;
        update = false;
        for(i = 0; i < E; i++){
            edge e = edges[i];
            if(dist[e.from] != INF && dist[e.to] > dist[e.from] + e.cost){
                dist[e.to] = dist[e.from] + e.cost;
                update = true;
            }
        }
        if(count == V){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for(i = 0; i < V; i++){
        if(dist[i] != INF){
            cout << dist[i] << endl;
        }else{
            cout << "INF" << endl;
        }
    }
}
