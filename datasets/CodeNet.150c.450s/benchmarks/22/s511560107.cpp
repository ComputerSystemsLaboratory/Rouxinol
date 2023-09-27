#include<iostream>
#include<climits>
using namespace std;

int main(){
    int v, e, r;
    cin >> v >> e >> r;

    int s[e], t[e], d[e];
    for(int i = 0; i < e; i++)  cin >> s[i] >> t[i] >> d[i];

    int dist[v];
    for(int i = 0; i < v; i++)  dist[i] = INT_MAX;
    dist[r] = 0;

    for(int i = 0; i < v-1; i++){
        for(int k = 0; k < e; k++){
            if(dist[s[k]] != INT_MAX)   
                dist[t[k]] = min(dist[t[k]], dist[s[k]] + d[k]);
        }
    }

    bool update = false;
    for(int k = 0; k < e; k++){
        if(dist[s[k]] == INT_MAX)   continue;
        if(dist[s[k]] + d[k] < dist[t[k]])  update = true;
    }
    
    if(update){
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        for(int i = 0; i < v; i++){
            if(dist[i] == INT_MAX)  cout << "INF" << endl;
            else                    cout << dist[i] << endl;
        }
    }
    
    return 0;
}
