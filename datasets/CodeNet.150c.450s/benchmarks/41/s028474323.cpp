#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
        int V, E;
        cin >> V >> E;

        int64_t D[100][100];
        for (int i = 0; i < V; i++)
                for (int j = 0; j < V; j++)
                        D[i][j] = i == j ? 0 : INT_MAX;

        for (int i = 0; i < E; i++) {
                int s, t, d;
                cin >> s >> t >> d;
                D[s][t] = d;
        }

        for (int k = 0; k < V; k++)
                for (int i = 0; i < V; i++)
                        for (int j = 0; j < V; j++)
                                if (D[i][k] != INT_MAX && D[k][j] != INT_MAX)
                                        D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
        
        for (int i = 0; i < V; i++) {
                if (D[i][i] < 0) {
                        cout << "NEGATIVE CYCLE" << endl;
                        return 0;
                }
        }

        for (int i = 0; i < V; i++) {
                for (int j = 0; j < V; j++) {
                        if (D[i][j] == INT_MAX)
                                cout << "INF";
                        else
                                cout << D[i][j];
                        cout << (j == V - 1 ? '\n' : ' ');
                }
        }

        return 0;
}