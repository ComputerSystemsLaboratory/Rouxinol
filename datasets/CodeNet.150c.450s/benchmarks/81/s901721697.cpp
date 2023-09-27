#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N;
    const int INF = 1e9;
    while(cin >> N, N){
        vector<vector<int>> Graph(10,vector<int>(10,INF));

        for(int i=0;i<N;i++){
            int a,b,c;
            cin >> a >> b >> c;
            Graph[a][b] = c;
            Graph[b][a] = c;
        }

        for(int mid = 0; mid < 10; mid++){
            for(int from = 0; from < 10; from++){
                for(int to = 0; to < 10; to++){
                    if(Graph[from][mid] == INF || Graph[mid][to] == INF) continue;
                    Graph[from][to] = min(Graph[from][to], Graph[from][mid] + Graph[mid][to]);
                }
            }
        }

        int V = -1;
        int minCost = INF;

        for(int i=0;i<10;i++){
            int cost = 0;
            for(int j = 0;j<10;j++){
                if(i == j) continue;
                if(Graph[i][j] == INF) continue;
                cost += Graph[i][j];
            }
            if(minCost > cost && cost != 0){
                minCost = cost;
                V = i;
            }
        }
        cout << V << " " << minCost << endl;
    }
}
