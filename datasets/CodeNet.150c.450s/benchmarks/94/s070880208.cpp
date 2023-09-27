#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define pf push_front
#define sz(obj) ((int)(obj).size())

int main()
{
  int n, cnt = 0;
  bool flg = 1;

  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++) scanf("%d", &a[i]);

  while (flg){
    flg = 0;
    for (int i = n - 1; i > 0; i--){
      if (a[i] < a[i - 1]){
        swap(a[i], a[i - 1]);
        flg = 1;
        cnt++;
      }
    }
  }

  printf("%d", a[0]);
  for (int i = 1; i < n; i++){
    printf(" %d", a[i]);
  }
  printf("\n%d\n", cnt);

}