#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(void){
    // Here your code !
  int r,c,n,i,j;
  int table[101][101];

  cin>>r>>c;
  for( i=0;i<r;i++){
      for( j=0;j<c;j++){
      cin>>table[i][j];
      }}
      
      for( i=0;i<r;i++){
          n=0;
      for( j=0;j<c;j++){
      n=n+table[i][j];
      }
          table[i][c]=n;
      }
      
      for( i=0;i<c;i++){
          n=0;
      for( j=0;j<r;j++){
      n=n+table[j][i];
      }
          table[r][i]=n;
      }
      
      for( i=0;i<r;i++){
     table[r][c]=table[r][c]+table[i][c];
      }
 for( i=0;i<=r;i++){
      for( j=0;j<=c;j++){
      cout<<table[i][j];
      if(j!=c) {cout<<" ";}
      }
         cout<<endl;
      }
}