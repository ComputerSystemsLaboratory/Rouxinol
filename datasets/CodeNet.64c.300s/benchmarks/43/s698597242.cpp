#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
  int a,b,c,d;
  int n = 2;
  int Max = 0;
  while(n--){
  scanf("%d %d %d %d",&a,&b,&c,&d);
  getchar();
   Max =max(Max,a+b+c+d);
  }
  cout <<Max<<endl;
  return 0;
}