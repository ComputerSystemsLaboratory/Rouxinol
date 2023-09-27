#include <bits/stdc++.h>
using namespace std;

long long D = 365, type = 26;
vector<long long> C(type);
vector<vector<long long>> S(D,vector<long long>(type));

long long calc(long long day, long long t, vector<long long> &last){
  long long score = S[day][t];
  last[t] = day;
  for(int i=0;i<type;i++){
    score -= C[i] * (day - last[i]);
  }
  return score;
}

int main(){
  cin >> D;
  for(int i=0;i<type;i++) cin >> C[i];
  for(int i=0;i<D;i++){
    for(int j=0;j<type;j++){
      cin >> S[i][j];
    }
  }
  
  long long score=0;
  vector<long long> last(type,-1);
  for(int i=0;i<D;i++){
    long long t;
    cin >> t;
    t--;
    score += calc(i,t,last);
    cout << score << endl;
  }
  return 0;
}
