#include<iostream>
#include<algorithm>
#include<set>
#define N 11

const int infty = 1<<28;

using namespace std;

int main(){
  while(true){    
    int w[N][N];
    set<int> town;
    int n;

    cin >> n;
    if( n == 0 ) break;
    fill(&w[0][0],&w[N-1][N],infty);

    for(int i = 0; i < n; ++i){
      int a,b,c;
      cin >> a >> b >> c;
      town.insert(a);town.insert(b);
      w[a][b] = w[b][a] = c;
    }

    for(int k = 0; k < N; ++k){
      for(int i = 0; i < N; ++i){
	for(int j = 0; j < N; ++j){
	  w[i][j] = min( w[i][j], w[i][k] + w[k][j] );
	}
      }
    }
    
    int min_cost= infty;
    int answer_town;

    for(int i = 0; i < N; ++i){
      if( town.find(i) == town.end() ) continue;
      int cost = 0;
      for(int j = 0; j < N; ++j){
	if( i == j ) continue;
	if( town.find(j) == town.end() ) continue;
	cost += w[i][j];
      }
      if( min_cost > cost ){
	min_cost = cost;
	answer_town = i;
      }
    }

    cout << answer_town << ' ' << min_cost << endl;
  }
  return 0;
}