#include<bits/stdc++.h>
using namespace std;


int main(){
  int v,e;cin>>v>>e;
  vector<vector<long long>> dist(v,vector<long long>(v,1e12)) ;
  for (int i = 0; i < v; i++) {
    dist[i][i] = 0;
  }
    
  for (int i = 0; i < e; i++) {
    int s,t,d;cin>>s>>t>>d;
    dist[s][t] = d;
  }

  for (int mid = 0; mid < v; mid++)
  for (int frm = 0; frm < v; frm++) 
  for (int des = 0; des < v; des++) 
  {
    dist[frm][des] = min(dist[frm][des],dist[frm][mid] + dist[mid][des]);
  }

  for (int i = 0; i < v; i++) 
  {
    if(dist[i][i] < 0)
    {
      cout<<"NEGATIVE CYCLE"<< endl;
      return 0;
    }
  }

  for (int i = 0; i < v; i++) 
  {
    if(dist[i][0] <= 1e11)cout << dist[i][0];
    else cout << "INF";
  for (int j = 1; j < v; j++) 
  {
    if(dist[i][j] <= 1e11)cout << " " << dist[i][j];
    else cout << " " << "INF";
  }
  cout << endl;
  }
}

