#include <iostream>
using namespace std;

int main()
{

  int a,b,x,y,r,migi,hidari,ue,sita = 0;

  cin >> a >> b >> x >> y >> r;
  
  migi = x+r;
  ue = y+r;
  hidari = x-r;
  sita = y-r;
  
  if(0 <= hidari && 0 <= sita){
    if(a >= migi && b >= ue){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
  else{
    cout << "No" << endl;
  }
}