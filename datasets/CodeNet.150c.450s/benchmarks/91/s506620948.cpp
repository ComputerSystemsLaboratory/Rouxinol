#include<iostream>
#include<cmath>
using namespace std;
#define MAX 1000000

bool prime[MAX]={};

void run(){
  for(int i=2;i<MAX;i++){
    prime[i]=true;
  } 

  for(int i=2;i<MAX;i++){
    if(!prime[i])continue;
    for(int j=2;j*i<MAX;j++){//i*1 is prime number
      prime[i*j]=false;
    }
  }
  return;
}

int main(){

  run();
  
  int n;
  while(cin>>n){
    int sum=0;
    for(int i=2; i<=n; i++){
      if(prime[i])sum++;
    }
    cout<<sum<<endl;
  }
  return 0;

}