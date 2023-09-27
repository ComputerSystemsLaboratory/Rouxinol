#include<iostream>
#include<stdio.h>
using namespace std;
int n,h[1777771];
char q[10],s[15];

int stoi(char c){
  if(c=='A')return 1;
  if(c=='G')return 2;
  if(c=='T')return 3;
  return 4;
}

int find(){
  int key=0;
  for(int i=0;s[i]!='\0';i++)key=key*4+stoi(s[i]);
  return key;
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    scanf("%s %s",q,s);
    int key=find();
    if(q[0]=='i'){
      h[key%1777771]=1;
    }else{
      printf(h[key%1777771]?"yes\n":"no\n");
    }
  }
  return 0;
}