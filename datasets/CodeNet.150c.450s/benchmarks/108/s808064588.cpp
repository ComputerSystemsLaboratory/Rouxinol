#include <iostream>
using namespace std;

#define N 101
#define WHITE 0
#define GRAY 1
#define BLACK 2

int Q[N], M[N][N], color[N], d[N], f = 1, c = 1;

void Enqueue(int n) {
  Q[f] = n;
  f++;
  if ( f == N ) f = 1;
}

int Dequeue() {
  int x = c;
  c++;
  if ( c == N ) c = 1;
  return Q[x];
}

void BFS ( int s ) {
  int u;
  for ( int i = 1; i <= N; i++ ) {
    color[i] = WHITE;
    d[i] = -1;
  }
  color[s] = GRAY;
  d[s] = 0;
  Enqueue(s);
  while(f!=c ) {
    u = Dequeue();
    for ( int i = 1; i <= N; i++ ) {
      if ( color[i] == WHITE && M[u][i] == 1 ) {
	color[i] = GRAY;
	d[i] = d[u] + 1;
	Enqueue(i);
      }
    }
    color[u] = BLACK;
  }
}

int main() {
  int n,u,k,v;
  for ( int i = 1; i < N; i++ ) {
    for ( int j = 1; j < N; j++ ) {
      M[i][j] = 0;
    }
  }
  cin >> n;
  for ( int i = 1; i <= n; i++ ) {
    cin >> u >> k;
    for ( int j = 0; j < k; j++ ) {
      cin >> v;
      M[u][v] = 1;
    }
  }
  BFS(1);
  for ( int i = 1; i <= n; i++ ) {
    cout << i << " " << d[i] << endl;
  }
  return 0;
}