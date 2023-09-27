#include<iostream>
#include<vector>
#include<deque>
#include<queue> 
#include<functional>
#include<climits>

//#define INF 2147483647
#define INF INT_MAX

using namespace std;

int n;
priority_queue<pair<int, int>,  deque<pair<int,int>>, greater<pair<int,int>>> q;
vector<vector<int>> c;
vector<int> d;


int input(){
  cin >> n;
  int u = 0, k = 0, v = 0;
  c.resize(n);
  for( int i = 0; i < n; i++ ){
    cin >> u >> k;
    c[u].resize(n, -1);
    for( int j = 0; j < k; j++ ){
      cin >> v;
      cin >> c[u][v];
    }
  }
  d.resize(n, INF);
  return 0;
}

int checkContinue(){
  for( int i = 0; i < n; i++ ){
    if( d[i] == INF ){ return 1; }
  }
  return 0;
}

int run(){
  q.emplace(pair<int,int>(0,0));
  while( checkContinue() ){
    pair<int, int> p = q.top();
    q.pop();
    if( d[p.second] < p.first ){ continue; }
    d[p.second] = p.first;
    for( int i = 0; i < n; i++ ){
      if( c[p.second][i] < 0 ){ continue; }
      q.push(pair<int,int>(p.first+c[p.second][i], i));
      // cout << p.first+c[p.second][i] << "," << i << endl;
    }
  }
  for( int i = 0; i < n; i++ ){
    cout << i << " " << d[i] << endl;
  }
  return 0;
}

int main(){
  input();
  run();
  return 0;
}


