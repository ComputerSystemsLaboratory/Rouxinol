#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
  long n;
  scanf("%ld",&n);
  int l = n;
  for(int i = 1;i < l;i++){
    n *=(l-i);
  }
  if(n ==0)
    n = 1;
  printf("%ld\n",n);
  return 0;
}