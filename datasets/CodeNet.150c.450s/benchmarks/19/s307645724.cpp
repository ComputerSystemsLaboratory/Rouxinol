#include <iostream>
using namespace std;
int main()
{
  int x,y,z,i;
  for (i = 0; i < 3001; i++) {
    cin >> x >> y;
    if(x==0 && y==0)break;
    if(x>y){
      z=x;
      x=y;
      y=z;
    }
    else{}
    cout <<x <<" "<< y <<'\n';
    /* code */
  }
  return 0;
}