#include <bits/stdc++.h>
using namespace std;

int main() {
 int N;
 cin >> N;
 vector<string>S(N);
  
 for(int i=0;i<N;i++){
  cin >> S.at(i);
 }
  
 int countAC = 0,countWA = 0,countTLE = 0,countRE = 0;
  
  for(int i=0;i<N;i++){
   if(S.at(i) == "AC"){
    countAC++;
   }
   else if(S.at(i) == "WA"){
    countWA++;
   }
   else if(S.at(i) == "TLE"){
    countTLE++;
   }
   else if(S.at(i) == "RE"){
    countRE++;
   }
  }
  cout << "AC" << " x " << countAC << endl;
  cout << "WA" << " x " << countWA << endl;
  cout << "TLE" << " x " << countTLE << endl;
  cout << "RE" << " x " << countRE << endl;
}
  