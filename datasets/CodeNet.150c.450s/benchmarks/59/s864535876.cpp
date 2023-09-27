#include "bits/stdc++.h"
using namespace std;

int main(void){

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  for (int i = 0; i < N-1; i++) cout << A.at(i) << " ";
  cout << A.at(N-1) << endl;
  
  int v = 0;
  for (int i = 1; i < N; i++)
  {
    v = A.at(i);
    int j = i - 1;
    while((j >= 0)&&(A.at(j) > v)){
      A.at(j+1) = A.at(j);
      j--;
      A.at(j+1) = v;
    }

    for(int k = 0; k < N-1; k++) cout << A.at(k) << " ";
    cout << A.at(N-1) << endl;
  }
  
  
  


  return 0;

}

