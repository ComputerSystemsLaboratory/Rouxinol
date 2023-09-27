#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

  int a[101];
  int n,M;

  for(int i = 1; i <= 100;i++ )a[i] = 0;
  M = 0;
  while(~scanf("%d",&n)){
    a[n]++;
    M=max(M,a[n]);
  }
  for(int i = 1;i <= 100 ; i++ ){
    if(a[i] == M)cout << i << endl;
}
  return 0;
}