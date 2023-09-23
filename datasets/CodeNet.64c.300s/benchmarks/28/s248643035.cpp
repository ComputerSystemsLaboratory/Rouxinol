#include<iostream>
using namespace std;

int main(void){

  int wide,height,x,y,r;

  cin >> wide >> height >> x >> y >> r;

  if(0<=x-r && x+r<=wide && y-r>=0 && y+r<=height)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}