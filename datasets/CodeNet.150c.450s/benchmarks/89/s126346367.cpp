#include<iostream>
using namespace std;

#define MAX 1000000


int main(){

  bool prime[MAX];
  int a,d,n;
  int head=2;
  int sum,k;
  
  prime[0]=true;

  while(head<=MAX){

    while(prime[head-1]!=false && head<MAX){ head++; }

    for(int i=2; head*i<=MAX; i++){ prime[head*i-1]=true; }

    head++;

  }

 

  while(cin >> a >> d >> n){
    if(a==0 && d==0 && n==0){ break; }

    k=0;
    sum=a;

    while(k<n){
      if(prime[sum-1]==false){ k++; }

      sum+=d;
    }

    cout << sum-d << endl;

  }

  

  return 0;
}