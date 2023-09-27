#include <iostream>
using namespace std;
static const int MAX = 101;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim()
{
    int u, mincost;
    int d[MAX], p[MAX], color[MAX];
     for(int i=0; i<MAX; i++)
     {
         color[i] = WHITE;
         d[i] = INFTY;
         p[i] = -1;
     }
     d[0] = 0;
     while(1)
     {
         mincost = INFTY;
         for(int i=0; i<n; i++)
         {
             if(color[i] != BLACK && d[i] < mincost)
             {
                 mincost = d[i];
                 u = i;
             }
         }
         if(mincost == INFTY)
                break;
         color[u] = BLACK;
         for(int v=0; v<n; v++)
         {
             if(color[v] != BLACK && M[u][v] != -1)
             {
                 if(M[u][v] < d[v])
                 {
                     d[v] = M[u][v];
                     p[v] = u;
                     color[v] = GRAY;
                 }
             }
         }
     }
     int sum = 0;
     for(int i=0; i<n; i++)
     {
         if(p[i] != -1)
            sum += M[i][p[i]];
     }
     return sum;
}
int main()
{
     cin >> n;
     int e;
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             cin >> e;
             if(e == -1)
                M[i][j] = INFTY;
             else
                M[i][j] = e;
         }
     }
     cout << prim() << endl;
     return 0;
}