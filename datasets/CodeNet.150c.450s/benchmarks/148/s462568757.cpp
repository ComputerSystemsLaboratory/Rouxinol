#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, n) for (int i = 1; i <= (int)(n); i++)

int main(){
  int N;
  cin >> N;
  vector<string> vec(N);

  for (int i = 0; i < N; i++) cin >> vec.at(i);

  int AC = 0;
  int WA = 0;
  int TLE = 0;
  int RE = 0;

  for (int i = 0; i < N; i++){
    if (vec.at(i) == "AC") AC += 1;
    if (vec.at(i) == "WA") WA += 1;
    if (vec.at(i) == "TLE") TLE += 1;
    if (vec.at(i) == "RE") RE += 1;
  }

  cout << "AC x " << AC << endl;
  cout << "WA x " << WA << endl;
  cout << "TLE x " << TLE << endl;
  cout << "RE x " << RE << endl;
}