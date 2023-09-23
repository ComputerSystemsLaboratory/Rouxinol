#include <iostream>
using namespace std;

int main(void){

  int N[30],n;

  for(int i=0 ; i < 30 ; i++){
    N[i]=1;
  }
  
  for(int i=0; i < 28 ; i++){
    cin >> n;
    N[n-1]=0;
  }

  for(int i=0 ; i < 30 ; i++){ 
    if(N[i] == 1){
      cout <<i+1<<endl;
    }
  }
  return 0;
  
}