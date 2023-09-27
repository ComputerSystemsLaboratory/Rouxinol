#include<iostream>
#define REP(i,s,n) for(int i=s ; i < n ; i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
int main(){

  int n,m;
  int card1[100],card2[100];
  int sum1,sum2;
  bool flag;
  
  while(1){
    
    cin >>n>>m;
    if(n == 0 && m == 0)break;
    
    sum1=0,sum2=0;
    flag=false;
    
    rep(i,n){
      cin >>card1[i];
      sum1+=card1[i];
    }
    rep(i,m){
      cin >>card2[i];
      sum2+=card2[i];
    }
    
    rep(i,n){
      rep(j,m){
	if(sum1-card1[i]+card2[j] == sum2-card2[j]+card1[i]){
	  cout <<card1[i]<<" "<<card2[j]<<endl;
	  flag=true;
	  break;
	}
      }
      if(flag)break;
    }
  
    if(!flag)cout <<"-1"<<endl;

  }
  
  return 0;  
}