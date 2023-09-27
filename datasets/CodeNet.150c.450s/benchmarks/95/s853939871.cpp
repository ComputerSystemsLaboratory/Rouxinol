#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstdio>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  while(1){
    cin >> N;
    if(N==0) break;
    string moji;
    int Right=0, Left=0;
    int cnt=0;
    int memo=0;

    for(int i=0; i<N; i++){

      cin >> moji;
      if(moji == "lu") Left = 1;
      else if (moji == "ru") Right = 1;
      else if (moji == "ld") Left = 0;
      else Right = 0;

      if(Left == Right && Left != memo){
        cnt++;
        memo = Left;
      }
    }
    cout << cnt << endl;
}
  return 0;
}