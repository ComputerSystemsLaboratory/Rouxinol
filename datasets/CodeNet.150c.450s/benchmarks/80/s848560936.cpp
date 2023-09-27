#include<iostream>

using namespace std;

int main(){

  int a[4];
  int b[4];
  int x=0,y=0;

  for(int i=0;i<4;i++){
    cin >> a[i];
    x=x+a[i];
  }

  for(int t=0;t<4;t++){
    cin >> b[t];
    y=y+b[t];
  }

  if(x>=y){
    cout << x;
  }else{
    cout << y;
  }

  cout << endl;


  return 0;
}
 