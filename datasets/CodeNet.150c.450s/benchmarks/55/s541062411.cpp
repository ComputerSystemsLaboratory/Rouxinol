#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  
  char ch;
  int d;
  int sum = 0;
  while(1){
    scanf("%c",&ch);
    if(ch == '\n'){
      if(sum == 0){
	break;
      }
      else{
	printf("%d\n",sum);
	sum = 0;
      } 
    }else{
      d = ch -'0';
      sum += d;
    }
  }
  return 0;
}   

