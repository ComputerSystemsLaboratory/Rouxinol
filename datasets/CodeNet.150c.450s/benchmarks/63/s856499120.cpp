#include <iostream>
#include <vector>
using namespace std;

const int Inf = 10000 * 100000 + 100;

int main(){
  int V,E,R;
  cin >> V >> E >> R;
  vector<int> s(E),t(E),d(E);
  for(int i = 0; i < E; i++)
    cin >> s[i] >> t[i] >> d[i];
  vector<int> cost(V, Inf);
  cost[R] = 0;

  for(int p = 0; p < V; p++){
    bool update = false;
    for(int i = 0; i < E; i++){
      int ns = s[i], nt = t[i], nd = d[i];
      if(cost[ns] < Inf && cost[ns] + nd < cost[nt]){
        update = true;
        cost[nt] = cost[ns] + nd;
      }
    }
    if(!update) break;
  }

  for(int i = 0; i < V; i++){
    if(cost[i] == Inf)
      cout << "INF";
    else
      cout << cost[i];

    cout << endl;
  }
}