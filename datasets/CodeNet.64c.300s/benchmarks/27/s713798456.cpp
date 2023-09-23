#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n,x;

int main() {
  
  while(1){
  
   cin>>n>>x;
  
   if(n==0) break;
   
   int ans=0;
   
   for(int i=n; i>=3; i--){
     
     for(int j=1; j<=i-1; j++){
       
         if(j>=x-i-j){
         break;
         }
       
       if(x-i-j<=i-1){
         ans++;
         }
         
       }
       
     }
     
     cout<<ans<<endl;
  
  }
    
}