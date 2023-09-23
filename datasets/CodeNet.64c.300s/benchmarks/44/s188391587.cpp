// Warshall-floyd
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 114514810

int n, a, b, c, v, d[11][11];// v: num of nodes

void init()
{
    for(int i=0; i<11; i++) {
        for(int j=0; j<11; j++) {
            if(i==j)// If not exist cost, cost=INF
                d[i][j] = 0;
            else
                d[i][j] = INF;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    while(1) {
        cin >> n;
        if(n == 0) break;
        init();

        v = -1;
        for(int i=0; i<n; i++) {
            cin >> a >> b >> c;
            d[a][b] = c; d[b][a] = c;
            v = max(v, max(a, b));
        }
        v++;

        for(int k=0; k<v; k++) {
            for(int i=0; i<v; i++) {
                for(int j=0; j<v; j++) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }


        int city, dist = INF;
        for(int i=0; i<v; i++) {
            int sum = 0;
            for(int j=0; j<v; j++) {
                sum += d[i][j];
            }
            if(sum < dist) {
                dist = sum;
                city = i;
            }
        }
        cout << city << " " << dist << endl;
    }

    return 0;
}