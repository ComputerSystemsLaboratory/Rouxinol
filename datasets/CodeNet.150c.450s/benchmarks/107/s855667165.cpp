#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int INF = (int)1e9;

int dp[1001][1001];
string A, B;

int solve(int i, int j) {
  if(i == A.length() || j == B.length()) return max(A.length() - i, B.length() - j);
  int &res = dp[i][j];
  if(res != -1) return res;
  if(A[i] == B[j]) return res = solve(i + 1, j + 1);
  res = INF;
  res = min(res, 1 + solve(i + 1, j)); // jの位置にA[i]を挿入
  res = min(res, 1 + solve(i + 1, j + 1)); // B[j]をA[i]に置換
  res = min(res, 1 + solve(i, j + 1)); // jの位置の文字を削除
  return res;
}

int main() {
  cin >> A >> B;
  memset(dp, -1, sizeof(dp));
  cout << solve(0, 0) << endl;
}