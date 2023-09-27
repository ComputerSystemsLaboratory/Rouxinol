#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int b,f,r,v;//building,floor,room,number of people
  int cb,cf,cr,cv;
  cin.ignore();
  b=4;
  f=3;
  r=10;
  int univ[4][3][10] = {{{0},{0},{0}}};
  for(int i = 0;i < n;i++){
    cin >> cb >> cf >> cr >> cv;
    univ[cb-1][cf-1][cr-1] += cv;
  }
  for(int i =0;i < b;i++){
    for(int j=0;j<f;j++){
      for(int k=0;k<r;k++){
        cout << " " << univ[i][j][k];
      }
      cout << endl;
    }
    if(i!=b-1){
      cout << "####################" << endl;
    }
  }
  return 0;
}
    

