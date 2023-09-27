#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  int myAC=0;
  int myWA=0;
  int myRE=0;
  int myTLE=0;
  cin >> N;
  
  for (int i=0 ;i<N;i++){
    cin >> S;
    if (S == "AC"){
      myAC++;
    }else if(S == "WA"){
      myWA++;
    }else if(S == "TLE"){
      myTLE++;
    }else if(S == "RE"){
      myRE++;
    }
  }
  cout << "AC x " << myAC << endl << "WA x " << myWA << endl<< "TLE x "  << myTLE << endl<< "RE x "  << myRE << endl;
  
  return 0;
}