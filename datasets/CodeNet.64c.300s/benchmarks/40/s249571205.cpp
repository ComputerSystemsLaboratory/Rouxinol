#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int i=0;
  char a;
  while(1){
    scanf("%c",&a);
    if('a'<=a && a<='z')printf("%c",a-32);
    else if('A'<=a && a<='Z')printf("%c",a+32);
    else cout<<a;
    if(a=='\n')break;
  }
  return 0;
}