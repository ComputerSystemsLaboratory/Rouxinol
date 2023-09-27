#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

const int MAXN = 200020;
int NODOS = 0;
typedef int Costo;
const Costo INF = 1 << 30;

typedef pair<Costo, int> CostoNodo;
vector<CostoNodo> grafoCosto[MAXN];
const bool bi = false;
// Grafos con ponderacion.
// Nodos indexados de 0 a n - 1.
// bi = true -> Bidireccional.
// bi = false -> Dirigido.

struct Ponderada{
  int x, y;
  Costo c;
  Ponderada(){}
  Ponderada(int x_, int y_, int c_) : x(x_), y(y_), c(c_) {}
  bool operator<(const Ponderada& q) const {
    return c < q.c ? true : false;
  }
};

void AgregarArista(int u, int v, Costo c) {
  if (bi) grafoCosto[v].push_back(CostoNodo(c, u));
  grafoCosto[u].push_back(CostoNodo(c, v));
}

void limpia(){
  for( int i = 0; i < NODOS; i++ )
    grafoCosto[i].clear();
}

// Algoritmo de dijkstra desde el nodo s.
// Devuelve el vector de distancias a todos
// los nodos desde s. Un valor INF indica que
// no es posible ir de s al respectivo nodo.
Costo dist[MAXN];
void Dijkstra(int s) {
  for( int i = 0; i < NODOS; i++ ) dist[i] = INF;
  priority_queue<CostoNodo> pq;
  pq.push(CostoNodo(0, s)), dist[s] = 0;
  while (!pq.empty()) {
    Costo p = -pq.top().first;
    int u = pq.top().second; pq.pop();
    if (dist[u] < p) continue;
    for (CostoNodo arista : grafoCosto[u]) {
      int v = arista.second;
      p = dist[u] + arista.first;
      if (p < dist[v]) dist[v] = p, 
        pq.push(CostoNodo(-p, v));
    }
  }
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int casos, N, M, S, T, x, y, c;

	cin >> N >> M >> S;
	NODOS = N;

	limpia();
	for( int i = 0; i < M; i++ ){
		cin >> x >> y >> c;
		AgregarArista( x, y, c );
	}
	Dijkstra( S );

	for( int i = 0; i < NODOS; i++ ){
		if( dist[i] == INF ){
			cout << "INF\n";
		}
		else
			cout << dist[i] << '\n';
	}
	
	return 0;
}