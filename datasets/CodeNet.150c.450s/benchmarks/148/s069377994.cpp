#include "bits/stdc++.h"
using namespace std;

int main(){
  
  int N;
  string* S;
  cin >> N;
  S = new string[N];
  for(int i=0;i<N;i++)
    cin >> S[i];
  
  int C[4] = {0};
  for(int i=0;i<N;i++){
    if(S[i] == "AC") C[0]++;
    else if(S[i] == "WA") C[1]++;
    else if(S[i] == "TLE") C[2]++;
    else if(S[i] == "RE") C[3]++;
  }
  
  cout << "AC x " << C[0] << endl;
  cout << "WA x " << C[1] << endl;
  cout << "TLE x " << C[2] << endl;
  cout << "RE x " << C[3] << endl;
  return 0;
}