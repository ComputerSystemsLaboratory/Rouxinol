#include<bits/stdc++.h>
using namespace std;
int main(){

  int N,sum;
  int cnt;

  while(1){
    cin >>N;
    if(N == 0)break;
    
    cnt=0;
    
    for(int i=1 ; i <= N/2 ; i++){
      sum=0;
      int j=0;
      while(1){
	sum+=i+j;
	if(sum == N){
	  cnt++;
	  break;
	}else if(sum > N){
	  break;
	}	
	j++;
      }
    }
    
    cout <<cnt<<endl;
    
  }
  return 0;
}