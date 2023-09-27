#include <bits/stdc++.h>
#define ll long long
using namespace std;


int N, v[100], w[100], W;
int V[101][10001] {0};
int main(){
  cin >> N >> W;
  for(int i = 0; i < N; i++){
    cin >> v[i] >> w[i];
  }
  for(int i = 0; i < N; i++){
    for(int k = 1; k <= 10000; k++){
      if(k >= w[i]){
	V[i+1][k] = max(v[i] + V[i][max(0,k - w[i])], V[i][k]);
      }else{
	V[i+1][k] = V[i][k];
      }
      
    }
  }

  cout << V[N][W] << endl;
  
}