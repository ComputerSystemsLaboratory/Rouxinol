#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
  int a[4][3][10]={0};
  
  int b,f,r,v,i,j,n;
  cin >> n;
  while(n--){
    cin >> b >> f >> r >> v ;
    a[b-1][f-1][r-1]+=v;
  }


  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<< a[0][i][j] ;
      cout << endl;
  }
  printf("####################\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<< a[1][i][j] ;
      cout << endl;
  }
  printf("####################\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<<a[2][i][j] ;
      cout << endl;
  }
  printf("####################\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<< a[3][i][j] ;
      cout << endl;
  } 
}