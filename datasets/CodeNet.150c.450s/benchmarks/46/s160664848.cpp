#include <iostream>
#include <cstdio> 
using namespace std;

int main(){
  int n,x;
  int L,M,S;
  int cnt;

 
  while(1){
  cnt = 0;
  cin >> n >> x;
  if(n==0 && x==0){
    break;  
    }
  
  for(int L=3; L<=n; L++){
    for(int M=2; M<n; M++){
      for(int S=1; S<n-1; S++){
        if(L<=M || M<=S || S>=L){
          continue;
        }else if(L+M+S==x){
          cnt += 1;
        }else{continue;}
      }   
    }
  }
   
   cout << cnt << endl;


  
  }
}