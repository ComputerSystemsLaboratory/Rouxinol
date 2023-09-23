#include<iostream>
using namespace std;

int main(){
  int n, u, k, v;
  cin >> n;
  int A[n * n];

  for(int i = 0; i < n * n; i++)
    A[i] = 0;

  for(int i = 0; i < n; i++){
    cin >> u >> k;
    while(k--){
      cin >> v;
      A[(u - 1) * n + (v - 1)] = true;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(j) cout << " ";
      cout << A[i * n + j];
    }
    cout << endl;
  }
}