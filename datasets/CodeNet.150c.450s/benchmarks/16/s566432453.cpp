//#include<iostream>
#include<vector>
#include<stack>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
  stack<int> S1;
  stack<pair<int, int>> S2;
  char ch;
  int sum = 0;
  for(int i=0; scanf("%c", &ch)!=EOF; i++)
  {
    if(ch == '\\') S1.push(i);
    else if(ch == '/' && S1.size() > 0)
    {
      int j =  S1.top();
      S1.pop();
      sum += i-j;
      int a = i - j;
      while(S2.size() > 0 && S2.top().first > j)//why while....
      {
        a += S2.top().second;
        S2.pop();
      }
      S2.push(make_pair(j, a));
    }
  }

  vector<int> ans;
  while(S2.size() > 0)
  {
    ans.push_back(S2.top().second);
    S2.pop();
  }
  reverse(ans.begin(), ans.end());
  printf("%d\n", sum);
  printf("%d", ans.size());
  for(int i=0; i<ans.size(); i++)
  {
    printf(" %d", ans[i]);
  }
  printf("\n");

  return 0;
}

