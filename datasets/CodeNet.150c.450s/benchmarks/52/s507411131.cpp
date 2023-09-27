#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
  stack<int> s;
  int x;
  while(scanf("%d", &x) != -1){
    if(x)
      s.push(x);
    else
      printf("%d\n", s.top()), s.pop();
  }
  return 0;
}