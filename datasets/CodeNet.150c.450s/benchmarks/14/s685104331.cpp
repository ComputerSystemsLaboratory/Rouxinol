#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n; bool flag;

int main() {
  
  int n; bool flag=true;
  
  scanf("%d",&n);
  
 for(int i=1; i<=n; i++){
       flag=true;
  if(i%3==0||i%10==3){
     cout<<" "<<i; flag=false;
     } 
  if(flag){
     int j=i; 
   while(1){
     if(j%10==3||j<3){ break; }
     j=j/10;
     if(j%10==3){
     cout<<" "<<i; break;
     }  
    }
   }
  }
  
   
    cout<<endl;
   

}