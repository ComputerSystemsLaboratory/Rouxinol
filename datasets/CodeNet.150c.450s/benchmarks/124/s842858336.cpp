#include<iostream>
#define rep(i, a) for(int i=0; i<(int)(a); i++)
using namespace std;
int M[100][100];int v, n, c, e,u,r,k;
const  long long int INF = (1<<21);
 void dijkstra() {
     int miv;
     int d[100], co[100];
     rep(i, n) {
         d[i] = INF;
         co[i] = 0;
     }
     d[0] = 0;
     co[0] = 1;
     while (1) {
         miv = INF;
         int u = -1;
         rep(i, n) {
             if (miv > d[i] && co[i] != 2) {
                 u = i;
                 miv = d[i];
             }
         }
         if (u == -1)
             break;
         co[u] = 2;
         rep(v, n) {
             if (co[v] != 2 && M[u][v] != INF) {
                 if (d[v] > d[u] + M[u][v]) {
                     d[v] = d[u] + M[u][v];
                     co[v] = 1;
                 }
             }
         } 
     }
     rep(i, n) {
         cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
     }
}
int main()
{
    cin >> n;
    rep(i, n) {
        rep(j, n) {
            M[i][j] = INF;
        }
    }
    rep(i, n) {
        cin >> u >> k;
        rep(j, k) {
            cin >> v >> c;
            M[u][v] = c;
        }
    }
    dijkstra();
}
