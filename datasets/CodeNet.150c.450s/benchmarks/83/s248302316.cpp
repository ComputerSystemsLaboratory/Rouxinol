#include <iostream>
using namespace std;

int V[101][10001];
int v[101];
int w[101];

int main(){
  int N,W;
  cin >> N >> W;

  v[0]=0;
  w[0]=0;
  for(int i=1;i<=N;++i){
    cin >> v[i] >> w[i];
  }

  
  for(int i=0;i<=W;++i){
    V[0][i]=0;
  }
        
  for(int i=0;i<=N;++i){
    V[i][0]=0;
  }
  

  for(int c=1;c<=W;++c){
    for(int i=1;i<=N;++i){
      if(c>=w[i]) V[i][c]=max(v[i] + V[i-1][c-w[i]], V[i-1][c]);
      else V[i][c]=V[i-1][c];
    }
  }
  cout << V[N][W] << endl;
}