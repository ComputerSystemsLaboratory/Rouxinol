#include <iostream>
using namespace std;

int V, E, R, S[500010], T[500010], D[500010];
const int Inf = 10000*100000+100;
int C[100010];

int main(){
  cin >> V >> E >> R;
  for (int i=0; i<E; i++)
    cin >> S[i] >> T[i] >> D[i];
  for (int i=0; i<V; i++)
    C[i] = Inf;
  C[R] = 0;
  for (int t=0; t<V; t++){
    bool update = false;
    for(int i=0; i<E; i++){
      int s = S[i], t = T[i], d = D[i];
      if (C[s] < Inf && C[t] > C[s]+d){
	C[t] = C[s]+d;
	update = true;
      }
    }
    if (!update) break;
  }
  for (int i=0; i<V; i++){
    if (C[i]<Inf)
      cout << C[i] << endl;
    else 
      cout << "INF" << endl;
  }
}