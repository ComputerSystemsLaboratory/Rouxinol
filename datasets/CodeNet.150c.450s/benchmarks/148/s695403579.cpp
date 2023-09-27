#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<string> A(N);
  for(int i=0;i<N;i++){
    cin >> A.at(i);
  }
  
  int countAC=0;
  int countWA=0;
  int countTLE=0;
  int countRE=0;
  
  for(int i=0;i<N;i++){
    if(A.at(i)=="AC"){countAC++;}
    if(A.at(i)=="WA"){countWA++;}
    if(A.at(i)=="TLE"){countTLE++;}
    if(A.at(i)=="RE"){countRE++;} 
  }
  
  cout << "AC x " << countAC << endl;
  cout << "WA x " << countWA << endl;
  cout << "TLE x " << countTLE << endl;
  cout << "RE x " << countRE << endl;

}
      