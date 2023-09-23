#include <cstdio>

int solve(int n, int r)
{
  if (n == 1) {
    if (r < 10) return 1;
    else return 0;
  } else {
    int a=0;
    for(int i=0;i<10&&r-i>=0;i++){
      a+=solve(n-1,r-i);
    }
    return a;
  }
}

int main()
{
  int n;
  while(~scanf("%d",&n)){
    printf("%d\n",solve(4,n));
  }
}