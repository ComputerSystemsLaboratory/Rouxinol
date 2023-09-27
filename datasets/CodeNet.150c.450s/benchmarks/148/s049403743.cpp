#include <bits/stdc++.h>

#include <fstream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int N;
  cin >> N;
  vector<int> result(4);
  for(int i = 0; i < N; i++){
    string s;
    cin >> s;
    if(s == "AC") result[0]++;
    else if(s == "WA") result[1]++;
    else if(s == "TLE") result[2]++;
    else result[3]++;
  }
  cout << "AC x " << result[0] <<endl;
  cout << "WA x " << result[1] <<endl;
  cout << "TLE x " << result[2] <<endl;
  cout << "RE x " << result[3] <<endl;
}