#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int r,c,a[100][100],sum;

int main() {
  
   cin>>r>>c;
   
   for(int j=0; j<r; j++){
     
     int ans=0;
   
   for(int i=0; i<c; i++){
       
       cin>>a[i][j];
       
       cout<<a[i][j]<<' ';
       
       ans+=a[i][j];
       
     }
     
     cout<<ans<<endl;
     
     }
     
   for(int i=0; i<c; i++){
     
     int ans=0;
   
   for(int j=0; j<r; j++){
       
       ans+=a[i][j];
       
     }
     
     sum+=ans;
     
     cout<<ans<<' ';
     
     }
     
     cout<<sum<<endl;
    
}