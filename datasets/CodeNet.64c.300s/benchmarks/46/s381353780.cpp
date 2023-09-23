#include<bits/stdc++.h>
#define REP(i,s,n) for(int i=s ; i <= n ; i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int Prime_n(int a,int d,int n){
  
  int cnt=0;
  bool isPrime;
  
  while(1){
    
    isPrime=true;
    
    if(a==1){
      isPrime=false;
    }else{
      REP(i,2,sqrt(a)){
	if(a%i==0){
	  isPrime=false;
	  break;
	}
      }
    }
    
    if(isPrime)cnt++;
    
    if(cnt==n)return a;
    
    a+=d;
    
  }
  
}
int main(){
  
  int a,d,n;

  while(1){
    cin >>a>>d>>n;
    if(a==0 && d==0 && n==0)break;  
    cout <<Prime_n(a,d,n)<<endl;
  }
  
  return 0;
}