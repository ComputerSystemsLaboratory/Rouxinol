#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
  int b1[3][10]={0};
  int b2[3][10]={0};
  int b3[3][10]={0};
  int b4[3][10]={0};
  int b,f,r,v,i,j,n;
  cin >> n;
  for (int x=0;x<n;x++){
    cin >> b >> f >> r >> v ;
    if(b==1)b1[f-1][r-1]+=v;
    if(b==2)b2[f-1][r-1]+=v;
    if(b==3)b3[f-1][r-1]+=v;
    if(b==4)b4[f-1][r-1]+=v;
  }


  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<< b1[i][j] ;
      cout << endl;
  }
  printf("####################\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<< b2[i][j] ;
      cout << endl;
  }
  printf("####################\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<< b3[i][j] ;
      cout << endl;
  }
  printf("####################\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++)cout << " "<< b4[i][j] ;
      cout << endl;
  } 
}