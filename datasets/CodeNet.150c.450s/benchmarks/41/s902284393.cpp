#include<iostream>
using namespace std;

int K[102][102], V, E;


int main() {
  int k, i, j, s, t, d;
  
  cin >> V >> E;
  
  for(i = 0; i < V; i++)
    for(j = 0; j < V; j++) {
      if (i == j) K[i][j] = 0;
      else K[i][j] = 0x7FFFFFFF;
    }
  for(i = 0; i < E; i++) {
    cin >> s >> t >> d;
    K[s][t] = d;
  }
  for(k = 0; k < V; k++)
    for(i = 0; i < V; i++)
      for(j = 0; j < V; j++)
	{
	  if (K[i][k] != 0x7FFFFFFF && K[k][j] != 0x7FFFFFFF) {
	    d = K[i][k] + K[k][j];
	    if (d < K[i][j]) K[i][j] = d;
	  }
	}
  for(i = 0; i < V; i++)
    if (K[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  for(i = 0; i < V; i++)
    {
      if (K[i][0] == 0x7FFFFFFF) cout << "INF";
      else cout << K[i][0];
      for(j = 1; j < V; j++)
	{
	  cout << " ";
	  if (K[i][j] == 0x7FFFFFFF) cout << "INF";
	  else cout << K[i][j];
	}
      cout << endl;
    }
  return 0;
}