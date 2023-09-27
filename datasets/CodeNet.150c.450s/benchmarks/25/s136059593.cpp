#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int a[26]={};
  char c;
  while((scanf("%c",&c))!=EOF){
    if('A'<=c && c<='Z')a[c-65]++;
    if('a'<=c && c<='z')a[c-97]++;
  }
  for(int i=0,c='a';i<26;i++,c++){
    printf("%c : %d\n",c,a[i]);
  }
  return 0;
}