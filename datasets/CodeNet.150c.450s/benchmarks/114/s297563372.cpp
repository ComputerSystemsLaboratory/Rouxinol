#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1e9
using namespace std;

int main(){
    //declaration and input
    int n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> graph[i][j];
    
    //get Minimum Spanning Tree by Prim's algorithm
    vector<int> parent_of(n, -1);
    vector<int> cost(n, INF);
    vector<int> state(n, 0);
    cost[0] = 0;
    state[0]++;

    int sum = 0;
    int parent = -1;
    while (true){
        int min_cost = INF;
        int next = -1;
        for (int i = 0; i < n; i++){
            if (state[i] == 1 && cost[i] < min_cost){
                min_cost = cost[i];
                next = i;
            }
        }
        if (min_cost == INF)
            break;
        sum += cost[next];
        state[next] = 2;
        for (int i = 0; i < n; i++){
            if (state[i] != 2 && graph[i][next] != -1){
                state[i] = 1;
                if (cost[i] > graph[i][next])
                    cost[i] = graph[i][next];
            }
        }
    }

    /*int sum = 0;
    for (int i = 0; i < n; i++){
        if (parent_of[i] != -1)
            sum += graph[i][parent_of[i]];
    }*/

    cout << sum << endl;
    return 0;
}
