#include<iostream>
#define MAX 3000000
using namespace std;
int prime[MAX];
int isPrime[MAX+1];

void seive(int n){
  for(int i=0;i<n;i++){
    prime[i]=i;
    isPrime[i+1]=true;
  }
  isPrime[0]=isPrime[1]=0;
  for(int i=2;i<n;i++){
    if(isPrime[i]==true)
      for(int j=2*i;j<n;j+=i)
	isPrime[j]=false;
  }
}

int main(){
  int a,b,n,count=0,c=0;
  seive(MAX);
  while(cin>>a>>b>>n,n){
    count=0;
    c=0;
    for(int i=0;count!=n;i++){
      if(isPrime[a+b*i]==true) count++;
      c++;
    }
    c--;
    cout<<a+b*c<<endl;
  }
  return 0;
}