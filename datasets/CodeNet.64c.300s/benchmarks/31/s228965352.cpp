#include <bits/stdc++.h>
using namespace std;
int main(void){
    int i,a;
  int check[30];
   for(i=0;i<30;i++){
       check[i]=0;
   }
  for(i=0;i<28;i++){
      cin>>a;
      check[a-1]=1;
  }
  for(i=0;i<30;i++){
      if(check[i]==0){
          cout<<i+1<<endl;
      }
  }
  
    
}

