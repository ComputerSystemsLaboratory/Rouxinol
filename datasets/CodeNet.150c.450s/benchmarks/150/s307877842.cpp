#include<bits/stdc++.h>

using namespace std;

const int MAX = 10001;
int cnt[MAX];

int main(){
  memset(cnt, 0, sizeof(cnt));
  int n; scanf("%d\n", &n);
  int lim = 0;
  while(n--){
    int tmp;
    scanf("%d",&tmp);
    cnt[tmp]++;
    lim = max(lim, tmp);
  }
  bool f = true;
  for(int i = 0; i <= lim; i++)
    while(cnt[i]--){
      if(!f) printf(" ");
      else f = false;
      printf("%d",i);
    }
  printf("\n");
  return 0;
}