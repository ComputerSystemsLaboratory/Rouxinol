#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
  char str[21];
  scanf("%s",str);
  int len =strlen(str);
  for(int i=len-1;i>=0;i--){
    printf("%c",str[i]);
  }
  cout<<endl;
}