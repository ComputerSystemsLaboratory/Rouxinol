#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, AC = 0, WA = 0, TLE = 0, RE = 0;
  cin >> N;
  vector<string> item(N);
  for (int i = 0; i < N; i++) cin >> item.at(i);
  
  for (int j = 0; j < N; j++) {
    if (item.at(j) == "AC") AC++;
    if (item.at(j) == "WA") WA++;
    if (item.at(j) == "TLE") TLE++;
    if (item.at(j) == "RE") RE++;
  }
  
  cout << "AC x " << AC << endl;
  cout << "WA x " << WA << endl;
  cout << "TLE x " << TLE << endl;
  cout << "RE x " << RE << endl;
}