#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int nm[100][100],m1[100];

int main() {
  
  int n,m;
  
  cin>>n>>m;
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>nm[i][j];
      }
    }
    
   for(int j=0; j<m; j++){
      cin>>m1[j];
      }
      
  for(int i=0; i<n; i++){
    int c=0;
    for(int j=0; j<m; j++){
      c+=nm[i][j]*m1[j];
      }
      cout<<c<<endl;
    }
    
}