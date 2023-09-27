#include <bits/stdc++.h>
using namespace std;

int main(){
  int D,score=0;
  cin >> D;
  vector<int> C(26);
  for(int i=0;i<26;i++){
    cin >> C.at(i);
  }
  vector<vector<int>> S(D,vector<int>(26));
  for(int i=0;i<D;i++){
    for(int j=0;j<26;j++){
      cin >> S.at(i).at(j);
    }
  }
  vector<int> T(D);
  for(int i=0;i<D;i++){
    cin >> T.at(i);
  }
  vector<int> memo(26);
  for(int i=1;i<=D;i++){
    score+=S.at(i-1).at(T.at(i-1)-1);
    memo.at(T.at(i-1)-1)=i;
    for(int j=1;j<=26;j++){
      score-=C.at(j-1)*(i-memo.at(j-1));
    }
    cout << score << endl;
  }
}