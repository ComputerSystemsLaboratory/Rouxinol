#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
  char s[30];
  scanf("%s", s);
  int n = strlen(s);
  int i;
  vector<char> v;
  for(i=n-1;i>=0;i--){
    v.push_back(s[i]);
  }
  for(i=0;i<n;i++)
    printf("%c", v[i]);
  printf("\n");

  return 0;
}