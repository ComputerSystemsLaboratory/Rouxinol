#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,l,a[100][100],b[100][100];

long c;

int main() {
  
   cin>>n>>m>>l;
   
   for(int i=0; i<n; i++){
     
     for(int j=0; j<m; j++){
     
     cin>>a[i][j];
     
     }
     
    }
    
    
    for(int i=0; i<m; i++){
     
     for(int j=0; j<l; j++){
     
     cin>>b[i][j];
     
     }
     
    }
    
    for(int i=0; i<n; i++){
     
     for(int j=0; j<l; j++){
       
       c=0;
       
     for(int k=0; k<m; k++){
         
         c+=a[i][k]*b[k][j];
          
      }
      
       if(j==l-1){
         
         cout<<c<<endl;
         
       }else{
         
         cout<<c<<' ';
         
         }
     
     }
     
    }
     
    
}