#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  vector<string> S(N);
  for(int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  
  int Nac=0, Nwa=0, Ntle=0, Nre=0;
  
  for(int i = 0; i < N; i++) {
    if(S.at(i)=="AC") Nac++;
    else if(S.at(i)=="WA") Nwa++;
    else if(S.at(i)=="TLE") Ntle++;
    else if(S.at(i)=="RE") Nre++;
  }
  
  cout << "AC x " << Nac << endl;
  cout << "WA x " << Nwa << endl;
  cout << "TLE x " << Ntle << endl;
  cout << "RE x " << Nre << endl;
}