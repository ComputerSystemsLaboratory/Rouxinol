#include <bits/stdc++.h>
using namespace std;

int main(){

  int A[1001] = {0}, N, key, j;

  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for(int s = 0; s < N; s++){
    cout << A[s];
    if(s != N-1) cout << " ";
    else if(s == N-1)cout << endl;
  }

  for(int i = 1; i < N; i++){
    key = A[i];
    j = i - 1;

    while(j >= 0 && A[j] > key){
      
      A[j+1] = A[j];
      j--;
      A[j+1] = key;
    }
    for(int s = 0; s < N; s++){
      cout << A[s];
      if(s != N-1) cout << " ";
      else if(s == N-1)cout << endl;
    }
  }



}