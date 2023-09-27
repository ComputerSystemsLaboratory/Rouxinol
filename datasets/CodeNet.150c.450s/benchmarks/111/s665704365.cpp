#include <iostream>
#include <vector>
using namespace std;
#define INF 1e8
typedef long long ll;
int n;
vector<int> num;
ll memo[100][21];

ll solve(int index, int ans){
  if(ans < 0 || ans > 20) return 0;
  if(memo[index][ans] != -1) return memo[index][ans];
  if(index + 1 == n) return (ans == num[index + 1]);
  return (memo[index][ans] = solve(index + 1, ans - num[index + 1]) + solve(index + 1, ans + num[index + 1]));
}

int main(void){
  cin >> n;
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    num.push_back(tmp);
  }
  for(int i = 0; i < 100; i++){
    for(int j = 0; j < 21; j++){
      memo[i][j] = -1;
    }
  }
  cout << solve(0, num[0]) << endl;
  return 0;
}