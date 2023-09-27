#include<iostream>
#include<vector>

using namespace std;

const int MAX = 101;
typedef long long ll;
int N;
ll dp[MAX][21];
vector<int> V;

void print(){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < 21; j++)
      cout << dp[i][j] << " ";
    cout << endl;
  }
}

void solve(){
  dp[1][V[0]] = 1;

  for(int i = 1; i < V.size()-1; i++){
    for(int j = 0; j < 21; j++){
      int next = j+V[i];
      if(0 <= next && next <= 20) dp[i+1][next] += dp[i][j];
      next = j-V[i];
      if(0 <= next && next <= 20) dp[i+1][next] += dp[i][j];
    }
  }
  //print();
   cout << dp[N-1][V.back()] << endl;
}

int main(){
  cin >> N;
  for(int i = 0; i < N; i++){
    int in;
    cin >> in;
    V.push_back(in);
  }
  solve();
  return 0;
}