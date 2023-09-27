#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
  char str[21];
  int i=0;
  cin>>str;
  while(1){
	  if(str[i]=='\0'){
		  break;
	  }
	  i++;
  }
  for(i>0;i--;){
	  cout<<str[i];
  }
  cout<<endl;

  return 0;
}