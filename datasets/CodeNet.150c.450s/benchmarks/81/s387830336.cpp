#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define INF (1 << 29)
typedef long long ll;
int main(){
  int n;
  ll cost[11][11], town[11];
  int from, to, t;
  while(cin >> n, n){
    for(int i = 0 ; i < 11 ; i++){
      town[i] = 0;
      for(int j = 0 ; j < 11 ; j++){
	cost[i][j] = INF;
	if(i == j) cost[i][j] = 0;
      }
    }

    int min_town=11, max_town=0;
    
    while(n--){
      cin >> from >> to >> t;
      min_town = min(min_town, min(from, to));
      max_town = max(max_town, max(from, to));
      cost[from][to] = t;
      cost[to][from] = t;
    }

    for(int k = min_town ; k <= max_town ; k++){
      for(int i = min_town ; i <= max_town ; i++){
	for(int j = min_town ; j <= max_town ; j++){
	  cost[i][j] = min(cost[i][j], cost[i][k]+cost[k][j]);
	}
      }
    }
	
    ll min_t = INF;
    for(int i = min_town ; i <= max_town ; i++){
      for(int j = min_town ; j <= max_town ; j++){
	town[i] += cost[i][j];
      }
      min_t = min(min_t, town[i]);
    }
  
    for(int i = min_town ; i <= max_town ; i++){
      if(town[i] == min_t){
	cout << i << ' ' << min_t << endl;
	break;
      }
    }
  }
  return 0;
}


    