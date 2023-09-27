// fibonacci
#include<iostream>
#define MAX 50
long f(long);
long F[MAX],n;
int main(){
  long i;
  std::cin >> n;
  for(i=0; i<MAX; i++) F[i] = -1;
  std::cout << f(n) << "\n";
  return 0;
}
long f(long n){
  if(n == 1 || n == 0) return F[n] = 1;
  if(F[n] != -1) return F[n];
  return F[n] = f(n - 2) + f(n - 1);
}