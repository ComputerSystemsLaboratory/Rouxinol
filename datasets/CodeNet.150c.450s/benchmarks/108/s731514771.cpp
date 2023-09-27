#include <utility>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N;
int D[100+10] = {};
int U = 0;
int K[100+10] = {0};
int V = -1;
int G[100+10][100+10] = {0};



void bfs(int src){
  //cerr << "bfs root = " << src << endl;
  queue<int> Q;
  Q.push(src);
  D[src] = 0;
  while (! Q.empty()){
    int cur = Q.front();
    Q.pop();
    //cerr << "visiting " << cur << " " << D[cur] << endl;
    for(int dst=1;dst<=N;++dst){
      if(D[dst] == -1 && G[cur][dst] == 1){
	D[dst] = D[cur]+1;
	Q.push(dst);
      }
    }
  }
}

int main(){
  cin >> N;
  for(int i=0;i<101;++i){
    D[i] = -1;//?????????
  }

  for(int i=0;i<N;++i){
    cin >> U;
    cin >> K[U];
    for(int j=0;j<K[U];++j){
      cin >> V;
      G[U][V] = 1;
    }
  }
  /*
  for(int j=1;j<=N;++j){
    for(int i=1;i<=N;++i){
      cout << G[i][j] << " ";
    }
    cout << endl;
   }
*/

  bfs(1);
  
  for(int i=1;i<=N;++i){
    cout << i << " " << D[i] << endl;
  }

}