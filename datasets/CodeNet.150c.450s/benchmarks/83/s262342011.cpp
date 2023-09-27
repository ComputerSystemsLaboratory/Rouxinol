#include<iostream>

using namespace std;

int N, W;
int V[150][15000];
int v[150];
int w[150];

int main(){
  cin >> N >> W;
  for(int i = 1; i <= N; ++i){
    cin >> v[i] >> w[i];
  }
  
  for(int i = 1; i <= N; ++i){
    for(int c = 1; c <= W ; ++c){
      if(i <= 0 || c <= 0){
        V[i][c] = 0;
      }
      else if(c - w[i] < 0){
        V[i][c] = V[i - 1][c];
      }
      else{
        V[i][c] = max(v[i] + V[i - 1][c - w[i]], V[i - 1][c]) ;
      }
    }
  }
  cout << V[N][W]  << endl;
}
