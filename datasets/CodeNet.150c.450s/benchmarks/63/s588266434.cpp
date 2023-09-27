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

// Algoritmo de Bellman-Ford optimizado, desde
// el nodo s. Devuelve un booleano indicando si
// existe un ciclo negativo en un digrafo.
// Obtiene el vector de distancias a todos.
Costo dst[MAXN]; // <- Resultado
bool BellmanFerrari(int s) {
  queue<int> q;
  vector<bool> en_cola(NODOS);
  vector<int> procesado(NODOS);
  for( int i = 0; i < NODOS; i++ ) dst[i] = INF;
  q.push(s), dst[s] = 0;
  while (!q.empty()) {
    int u = q.front();
    q.pop(), en_cola[u] = false;
    if (++procesado[u] == NODOS) return true;
    for (CostoNodo arista : grafoCosto[u]) {
      int v = arista.second;
      Costo p = arista.first;
      if (dst[u] + p < dst[v]) {
        if (!en_cola[v]) q.push(v);
        dst[v] = dst[u] + p;
        en_cola[v] = true;
      }
    }
  }
  return false;
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
	BellmanFerrari( S );

	for( int i = 0; i < NODOS; i++ ){
		if( dst[i] == INF ){
			cout << "INF\n";
		}
		else
			cout << dst[i] << '\n';
	}
	
	return 0;
}