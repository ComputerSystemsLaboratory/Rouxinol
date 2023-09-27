#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cstdlib>
#include <typeinfo>
#include <list>
#include <stdio.h>
#include <math.h>

using namespace std;

int MAX_R = 10;
int MAX_C = 10000;

int main() {
  int gril[MAX_R][MAX_C];
  int r, c;

  while(1){
    scanf("%d %d", &r, &c);
    if(r == 0 && c == 0) return 0;
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++)
        scanf("%d", &gril[i][j]);

    int ans = 0;
    for (int mask = 0; mask < (1 << r); mask++) {
      vector<int> sum_of_0(c, 0);

      for (int r_pos = 0; r_pos < r; r_pos++) {
        if (mask & (1 << r_pos)){
          for (int i = 0; i < c; i++) if(gril[r_pos][i] == 1) sum_of_0[i]++;
        }else{
          for (int i = 0; i < c; i++) if(gril[r_pos][i] == 0) sum_of_0[i]++;
        }
      }

      int tmp = 0;
      for (int i = 0; i < c; i++) tmp += max(sum_of_0[i], r - sum_of_0[i]);
      ans = max(ans, tmp);
    }
    printf("%d\n", ans);
  }
  return 0;
}