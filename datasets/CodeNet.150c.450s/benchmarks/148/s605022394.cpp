#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int AC = 0, WA = 0, TLE = 0, RE = 0;
  for(int i = 0; i < N; i++){
    string S;
    cin >> S;
    if(S == "AC"){
      AC += 1;
    }
    if(S == "WA"){
      WA += 1;
    }
    if(S == "TLE"){
      TLE += 1;
    }
    if(S == "RE"){
      RE += 1;
    }
  }
  cout << "AC x " << AC << endl;
  cout << "WA x " << WA << endl;
  cout << "TLE x " << TLE << endl;
  cout << "RE x " << RE << endl;
}