#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int array[4][3][10];

int main() {
  
  int n;
  
  cin>>n;
  
  for(int i=0; i<n; i++){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    array[a-1][b-1][c-1]+=d;
    }
    
   for(int i=0; i<4; i++){
       for(int j=0; j<3; j++){
           for(int k=0; k<10; k++){
             cout<<" "<<array[i][j][k];
        }
             cout<<endl;
      }
      if(i==3){ 
        continue;
      }cout<<"####################"<<endl;
    }
    
}