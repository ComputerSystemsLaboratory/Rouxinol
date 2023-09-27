#include<iostream>
#include<algorithm>
using namespace std;

int C, R;

bool flag[10], S[10][10000];

int count()
{
  int ans = 0;
  for(int i = 0; i < C; i++)
  {
    int tmp = 0;
    for(int j = 0; j < R; j++)
    {
      if(flag[j] == S[j][i])
        tmp++;
    }
    ans += max(R - tmp, tmp);
  }
  return ans;
}

int dfs(int n)
{
  if(n == R)
    return count();
  int ans = 0;
  flag[n] = 0;
  ans = max(ans, dfs(n + 1));
  flag[n] = 1;
  ans = max(ans, dfs(n + 1));
  return ans;
}

int main()
{
  while(true)
  {
    cin >> R >> C;
    if(!R && !C)
      break;
    for(int i = 0; i < R; i++)
      for(int j = 0; j < C; j++)
        cin >> S[i][j];
    cout << dfs(0) << endl;
  }
}