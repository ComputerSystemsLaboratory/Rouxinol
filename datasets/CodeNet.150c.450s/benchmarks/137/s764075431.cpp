#include<iostream>
#include<stdio.h>
#include<string.h>
#include<set>
using namespace std;
int main(){
  int n,i,cou=0;
  string x,y,b="insert",c="find";
  set<string> a;
  cin>>n;
  int ans[n];
  for(i=0;i<n;i++){
    cin>>x;
    if(x==b){
      cin>>y;
      a.insert(y);
    }
    if(x==c){
      cin>>y;
      if(a.find(y)!=a.end()){
	printf("yes\n");
      }
      else printf("no\n");
    }
  }
  return(0);
}