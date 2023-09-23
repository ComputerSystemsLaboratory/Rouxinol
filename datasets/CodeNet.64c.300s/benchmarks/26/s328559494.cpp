#include<cstdio>
typedef unsigned long long ul;
using namespace std;
ul power(ul n,ul m){
  
  if(m == 0) return 1;
  ul res = 1;
  res = power(n,m/2);
  if(m%2 == 0) return res = res*res%1000000007;
  return res = (((res*res)%1000000007)*n)%1000000007;
}
int main(){
  
  int n,m;
  scanf("%d %d",&n,&m);
  printf("%llu\n",power(n,m));

  return (0);
}