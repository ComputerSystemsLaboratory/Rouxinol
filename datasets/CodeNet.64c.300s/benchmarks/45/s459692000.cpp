#include<iostream>
using namespace std;
int main(){

  int N,M,P,player[100];
  int sum_ticket;
  
  while(1){
    
    cin >>N>>M>>P;
    
    if(N==0 && M==0 && P==0)break;
    
    sum_ticket=0;
    
    for(int i=0 ; i < N ; i++){
      cin >>player[i];
      sum_ticket+=player[i];
    }

    if(player[M-1] != 0){
      cout <<(sum_ticket*(100-P))/player[M-1]<<endl;
    }else{
      cout <<"0"<<endl;
    }
    
  }
  
  
  return 0;
}