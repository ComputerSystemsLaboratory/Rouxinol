#include <iostream>
using namespace std;
int n;
static const int MAX = 100;
static const int INF = (1 << 21);
int M[MAX][MAX];
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;


void dijkstra(){
    int minv;
    int d[MAX], color[MAX];

    for (int i = 0; i < n; i++){
        d[i] = INF;
        color[i] = WHITE;
    }

    d[0] = 0;
    // color[]

    while(1){
        minv = INF;
        int u = -1;

        for (int i = 0; i < n; i++){
            if (minv > d[i] && color[i] != BLACK){
                minv= d[i];
                u = i;
            }
        }

        if (u == -1){ //全部探索済み
            break;
        }

        color[u] = BLACK;
        for (int i = 0; i < n; i++){
            if (color[i] != BLACK && d[i] > M[u][i] != INF){
                if (d[i] > d[u] + M[u][i]){
                    color[i] = GRAY;
                    d[i] = d[u] + M[u][i];
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
            cout << i << " ";
            if (d[i] == INF){
                cout << -1 << endl;
            }else{
                cout << d[i] << endl;
            }
            
        }
}

int main(void){
    int tmp;

    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            M[i][j] = INF;
        }
    }

    int u, k;
    int v, c;
    for (int i = 0; i < n; i++){
        cin >> u >> k;
        for (int j = 0; j < k; j++){
            cin >> v >> c;
            M[u][v] = c;
        }
    }
    dijkstra();

    return 0;
}

