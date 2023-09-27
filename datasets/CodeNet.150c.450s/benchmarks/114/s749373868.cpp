#include<iostream>
   
using namespace std;
static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;
   
int n, M[MAX][MAX];
   
int prim() {
   int a, min;
   int d[MAX], p[MAX], color[MAX];
    
   for ( int i = 0; i < n; i++) {
      d[i] = INFTY;
      p[i] = -1;
      color[i] = WHITE;
   }
   
   d[0] = 0;
   
   while ( 1 ) {
      min = INFTY;
      a = -1;
   
      for ( int i = 0; i < n; i++ ) {
         if ( min > d[i] && color[i] != BLACK ) {
            a = i;
            min = d[i];
         }
      }
   
      if ( a == -1 ) break;
      color[a] = BLACK;
      for ( int v = 0; v < n; v++ ) {
         if ( color[v] != BLACK && M[a][v] != INFTY ) {
            if ( d[v] > M[a][v] ) {
               d[v] = M[a][v];
               p[v] = a;
               color[v] = GRAY;
            }
         }
      }
   }
   
   int sum = 0;
   for ( int i = 0; i < n; i++ ) {
      if ( p[i] != -1 ) sum = sum + M[i][p[i]];
   }
    
   return sum;
}
   
int main() {
   cin >> n;
   
   for ( int i = 0; i < n; i++ ) {
      for ( int j = 0; j < n; j++ ) { 
         int e; cin >> e;
         M[i][j] = (e == -1) ? INFTY : e;
      }
   }
   
   cout << prim() << endl;
   
   return 0;
}