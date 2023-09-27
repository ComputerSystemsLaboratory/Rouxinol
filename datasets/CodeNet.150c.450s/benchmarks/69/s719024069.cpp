#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;

stack<int> B, C;
int A[10];

bool dfs(int index)
{
  bool ret = false;
  char s[11];

  if (index >= 10) {
    return true;
  }

  for (int i = 0; i < 11; i++) {
    if (i < index) s[i] = '>';
    else s[i] = 0;
  }

  if (B.empty() || B.top() < A[index]) {
    B.push(A[index]);
    // printf("%spush %d into B\n", s, A[index]);
    ret = dfs(index + 1);
    // printf("%s%s. pop %d from B\n", s, ret ? "succeeded" : "failed", A[index]);
    B.pop();
  }
  if (!ret && (C.empty() || C.top() < A[index])) {
    C.push(A[index]);
    // printf("%spush %d into C\n", s, A[index]);
    ret = dfs(index + 1);
    // printf("%s%s. pop %d from C\n", s, ret ? "succeeded" : "failed", A[index]);
    C.pop();
  }

  return ret;
}

bool solve()
{
  while (!B.empty()) B.pop();
  while (!C.empty()) C.pop();

  B.push(A[0]);
  bool ret = dfs(1);
  B.pop();

  return ret;
}

int main()
{
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 10; j++) {
      scanf("%d", A + j);
    }

    if (solve()) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }

  return 0;
}
