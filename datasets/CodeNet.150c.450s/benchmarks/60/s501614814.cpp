#include <iostream>
#include <vector>

#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;

int n;
typedef vector<vector<int> > AdjMatrix;
AdjMatrix graph;


int main()
{
    int u,k,v;
    cin >> n;
    graph = AdjMatrix(n, vector<int>(n, 0));
    REP(i,n){
        cin >> u >> k;
        REP(j,k){
            cin >> v;
            graph[u-1][v-1] = 1;
        }
    }

    REP(i, n){
        REP(j, n-1){
            cout << graph[i][j] << " ";
        }
        cout << graph[i][n-1] << endl;
    }
    return 0;
}