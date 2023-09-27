#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

  int n,p,i;

  while(1){
    cin >> n >>p;
    if(n+p==0) break;
    int candidate[n],bowl;

    //init 
    for(i=0;i<n;i++) candidate[i]=0;
    bowl = p;

    for(i=0; i<1000000; i++){
      if(bowl > 0){
	candidate[i%n]++;
	bowl--;
      }else{
	bowl=candidate[i%n];
	candidate[i%n]=0;
      }
      if(candidate[i%n]==p) break;
    }
    printf("%d\n",i%n);
  }
  return 0;
}