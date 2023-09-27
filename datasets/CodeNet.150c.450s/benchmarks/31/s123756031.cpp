#include "bits/stdc++.h"
using namespace std;

int main(void){

  int N;
  cin >> N;

  vector<int> Y(N);
  for (int i = 0; i < N; i++) cin >> Y.at(i);

  int Ymin = Y.at(0);
  int K = Y.at(1) - Y.at(0);
  for (int i = 1; i < N; i++)
  {
    if ((Y.at(i) - Ymin) > K)
    {
      K = (Y.at(i) - Ymin);
    }
    if (Y.at(i) < Ymin)
    {
      Ymin = Y.at(i);
    }
    
  }
  
  cout << K << endl;
  


  return 0;

}

