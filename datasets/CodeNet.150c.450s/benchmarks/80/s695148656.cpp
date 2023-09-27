#include<iostream>
using namespace std;

int main(){

  int a[4][4];
  for(int b=0;b<4;b++){
    cin >> a[0][b];
  }
  for(int c=0;c<4;c++){
    cin >> a[1][c];
  }

  if((a[0][0]+a[0][1]+a[0][2]+a[0][3]) > (a[1][0]+a[1][1]+a[1][2]+a[1][3])){
    cout << a[0][0]+a[0][1]+a[0][2]+a[0][3] << endl;
  }
  else{
    cout << a[1][0]+a[1][1]+a[1][2]+a[1][3] << endl;
  }

  return 0;
}