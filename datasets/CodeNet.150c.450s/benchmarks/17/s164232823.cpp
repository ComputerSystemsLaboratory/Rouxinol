#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a[5]={0};
  int i;
  for(i=0; i<5; i++){
    scanf("%d", &a[i]);
  }

  sort(a,a+5);

  for(i=4; i>=0; i--){
    printf("%d",a[i]);
    if(i!=0)printf(" ");
  }
  puts("");
}