#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
  for(int tci = 0; ; tci++) {
    int m; scanf("%d", &m);
    if(m==0) break;
    int n = 0;
    int tbl[10][10];
    for(int i = 0; i < 10; i++)
      for(int j = 0; j < 10; j++)
        tbl[i][j] = i==j ? 0 : INT_MAX/2;
    for(int i = 0; i < m; i++) {
      int a,b,c; scanf("%d%d%d", &a, &b, &c);
      tbl[a][b] = tbl[b][a] = min(tbl[b][a],c);
      n = max(n,max(a+1,b+1));
    }
    for(int k = 0; k < n; k++)
      for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
          tbl[i][j] = min(tbl[i][j], tbl[i][k]+tbl[k][j]);
    pair<int,int> result(INT_MAX,INT_MAX);
    for(int i = 0; i < n; i++) {
      int sum = 0;
      for(int j = 0; j < n; j++) {
        sum += tbl[i][j];
      }
      result = min(result,make_pair(sum,i));
    }
    printf("%d %d\n", result.second, result.first);
  }
  return 0;
}