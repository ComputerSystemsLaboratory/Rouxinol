#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;

const int MAX_V = 100;
const int INF = INT_MAX;

int v;
int g[MAX_V][MAX_V];
int d[MAX_V][MAX_V];

bool warshallfloyd()
{
  copy(&g[0][0], &g[MAX_V][0], &d[0][0]);
  for(int i = 0; i < v; i++)
    d[i][i] = 0;
  
  for(int k = 0; k < v; k++)
    for(int i = 0; i < v; i++)
      for(int j = 0; j < v; j++)
        if(d[i][k] != INF && d[k][j] != INF)
          d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
  
  for(int i = 0; i < v; i++)
    if(d[i][i] < 0) return false;
  
  return true;
}

int main()
{
  int gv, ge;
  cin >> gv >> ge;
  v = gv;
  fill(&g[0][0], &g[MAX_V][0], INF);
  for(int i = 0; i < ge; i++){
    int gs, gt, gd;
    cin >> gs >> gt >> gd;
    g[gs][gt] = gd;
  }
  
  if(warshallfloyd())
    for(int i = 0; i < v; i++)
      for(int j = 0; j < v; j++){
        if(d[i][j] != INF)
          cout << d[i][j];
        else
          cout << "INF";
        if(j != v - 1)
          cout << " ";
        else 
          cout << endl;
      }
  else
    cout << "NEGATIVE CYCLE" << endl;
}