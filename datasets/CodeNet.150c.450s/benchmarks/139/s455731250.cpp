#include <bits/stdc++.h>

#define REPI(x) for(int i=0;i<x;i++)
#define REPJ(x) for(int j=0;j<x;j++)

#define REPISE (s,e) for(int i=s,i<e;i++)
#define REPJSE (s,e) for(int j=s,j<e;j++)

typedef long long ll;

using namespace std;

int main ()
{
  int N,M,a,b,n;
  int pathes = 0;
  cin >> N >> M;
  
  vector<vector<int> > vvi(N+1);
  vector<bool> visited(N+1);
  queue<int> connected;
  vector<int> path(N+1);
  

  REPI(N+1){
    visited[i] = false;
    path[i] = -1;
  }

  REPI(M)
  {
    cin >> a >> b;
    vvi[a].push_back(b);
    vvi[b].push_back(a);
  }

  connected.push(1);

  while(!connected.empty ())
  {
    n = connected.front();
    connected.pop ();
    if (visited[n])
      continue;
    
    visited[n] = true;
    for (auto i = vvi[n].begin(); i != vvi[n].end (); i++)
    {
      if (path[(*i)] != -1) 
        continue;
      
      path[(*i)] = n;
      pathes++;
      connected.push((*i));
    }
  }

  if (pathes < N-1)
    cout << "No" << endl;
  else
  {
    cout << "Yes" << endl;

    for(int i=2;i<=N;i++)
      cout << path[i] << endl;
  }    
  
  return 0;
}