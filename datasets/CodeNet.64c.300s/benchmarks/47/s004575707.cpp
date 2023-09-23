#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(void)
{
  int max = 0, cnt[101];
  int n;

  for(int i = 0 ; i < 101 ; i++) {
    cnt[i] = 0;
  }

  while(scanf("%d",&n) != EOF) {
    cnt[n]++;
  }
  for(int i = 0 ; i < 101 ; i++) {
    if(max < cnt[i]) max = cnt[i];
  }
  for(int i = 0 ; i < 101 ; i++) {
    if(cnt[i] == max) cout << i << endl;
  }
  return 0;
}