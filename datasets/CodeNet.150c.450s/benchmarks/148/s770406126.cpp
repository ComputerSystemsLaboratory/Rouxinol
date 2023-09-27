#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<string> result(N);
  for(int i = 0; i < N; i++){
   cin >> result.at(i);
  }
  
  int A = 0,W = 0, T = 0, R = 0;
  
  for(int i = 0; i < N; i++){  
    if(result.at(i) == "AC"){
      A++;}
    else if(result.at(i) == "WA"){
      W++;}
    else if(result.at(i) == "TLE"){
      T++;}
    else {R++;}
  }
  cout << "AC x " << A << endl; 
   cout << "WA x " << W << endl; 
  cout << "TLE x " << T << endl; 
  cout << "RE x " << R << endl; 
  
    
  
}