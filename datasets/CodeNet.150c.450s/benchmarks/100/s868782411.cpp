#include <bits/stdc++.h>
using namespace std;


int main(){
  long long ans =1;
  int n;
  scanf("%d", &n);

  for(int i=n;i>1;--i)
    ans*=i;
  printf("%lld\n",ans);

  return EXIT_SUCCESS;
}