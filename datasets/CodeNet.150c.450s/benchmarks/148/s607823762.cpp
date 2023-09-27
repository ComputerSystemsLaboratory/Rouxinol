#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int   N;
  cin >> N;	
  vector<string> S(N);
  vector<long long int> C(4,0);
  for(long long int i = 0; i < N; i++) cin >> S[i];
  
  for(long long int i = 0; i < N; i++){
    if(S[i] == "AC") C[0]++;
    if(S[i] == "WA") C[1]++;
    if(S[i] == "TLE") C[2]++;
    if(S[i] == "RE") C[3]++;
  }
  
  cout << "AC x " << C[0] << endl;
  cout << "WA x " << C[1] << endl;
  cout << "TLE x " << C[2] << endl;
  cout << "RE x " << C[3] << endl;
  
}
