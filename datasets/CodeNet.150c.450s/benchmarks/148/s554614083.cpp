#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<string> S(N);
  vector<string> T = {"AC","WA","TLE","RE"};
  vector<int> C(4);
  
  for (int i = 0; i < N; i++){
    cin >> S.at(i);
    for (int j = 0; j < 4; j++){
      if(S.at(i) == T.at(j)){
      	C.at(j) ++;
      }
    }
  }
  
  for (int j = 0; j < 4; j++){
    cout << T.at(j) << " x " << C.at(j) << endl;
  }
}
