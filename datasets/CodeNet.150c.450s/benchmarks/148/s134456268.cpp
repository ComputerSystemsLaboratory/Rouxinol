#include <bits/stdc++.h>
using namespace std;

int main() {
  int A = 0,W = 0,T =0,R = 0,N;
  cin >> N;
  vector<string>s(N);
  for(int i = 0;i < N;i++)cin >> s[i];
  for(int i = 0;i < N;i++){
    if(s[i] == "AC")A++;
    else if(s[i] == "WA")W++;
    else if(s[i] == "TLE")T++;
    else R++;
  }
  cout << "AC x " << A <<endl;
  cout << "WA x " << W <<endl;
  cout << "TLE x " << T <<endl;
  cout << "RE x " << R <<endl;
}