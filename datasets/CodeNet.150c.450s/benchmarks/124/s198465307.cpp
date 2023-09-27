#include <iostream>
using namespace std;

#define N 101
#define INF 500001 
int n;

int A[N][N];
int color[N];
int d[N];

void dijkstra(int root) {
    d[root] = 0;

    while(true) {
        int added = -1;
        int minw = INF;
        for (int i = 0; i < n; i++) {
            if (color[i] == 0 && d[i] < minw) {
                added = i;
                minw = d[i];
            }
        }

        if (added == -1) {
            break;
        }

        color[added] = 1;
        for (int i = 0; i < n; i++) {
            if (color[i] == 0 && (d[added] + A[added][i]) < d[i]) {
                d[i] = d[added] + A[added][i];
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = INF;
        }
    }

    int w;
    int node;
    int k;
    int ad;
    for (int i = 0; i < n; i++) {
        color[i] = 0;
        d[i] = INF;

        cin >> node >> k;
        for (int j = 0; j < k; j++) {
            cin >> ad >> w;
            A[i][ad] = w;
        }
    }

    dijkstra(0);

    for (int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }

    return 0;
}

