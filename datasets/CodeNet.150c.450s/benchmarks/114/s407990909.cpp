#include<iostream>
#include<stdlib.h>
using namespace std;

static const int MAX = 100;
static const int INF = (1<<21);
int color[MAX] = {0};
int M[MAX][MAX];
int d[MAX];

void prim(int n) {
    d[0] = 0;
    int minconst = INF, u, i;
    for ( i = 1; i < n; i++ ) d[i] = INF;

    while(1) {
        minconst = INF;
        for ( i = 0; i < n; i++ )
        {
            if ( color[i] != 1 && minconst > d[i] ) {
                minconst = d[i];
                u = i;
            }
        }

        if ( minconst == INF )
            break;

        color[u] = 1;

        for ( i = 0; i < n; i++ ) {
            if ( color[i] != 1 && M[u][i] != -1 ) {
                if ( M[u][i] < d[i] ) d[i] = M[u][i];
            }
        }
    }
}

int main() {
    int n, i, j;

    cin >> n;
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ ) {
            cin >> M[i][j];
        }
    }

    prim(n);

    int sum = 0;
    for ( i = 0; i < n; i++ ) {
        sum += d[i];
    }
    cout << sum << endl;
}

