//list index out of rangeエラー表示用
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep1(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  string s;
  int AC = 0;
  int WA = 0;
  int TLE = 0;
  int RE = 0;
  rep1(i, n){
    cin >> s;
    if(s == "AC")AC += 1;
    if(s == "WA")WA += 1;
    if(s == "TLE")TLE += 1;
    if(s == "RE")RE += 1;
  }
  cout << "AC" << " " << "x" << " " << AC << endl;
  cout << "WA" << " " << "x" << " " << WA << endl;
  cout << "TLE" << " " << "x" << " " << TLE << endl;
  cout << "RE" << " " << "x" << " " << RE << endl;
}

