#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n,a[105];

int main() {
  
    cin>>n;
    
    for(int i=0; i<n; i++){
      cin>>a[i];
      }
   
    for(int i=n-1; i>=0; i--){
      
      if(i==0){
        cout<<a[i]<<endl;
        }
      else{
        cout<<a[i]<<" ";
        }
        
      }

}