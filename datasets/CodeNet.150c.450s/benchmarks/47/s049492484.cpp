#include <iostream>
using namespace std;

int main(){

  int W,H,x,y,r;
  cin >> W >> H >> x >> y >> r;
  
  if((x+r)<=W)
    if(0<=(x-r))
      if(y+r<=H)
	if((y-r)>=0)
	  cout << "Yes" << endl;
	else
	  cout << "No" << endl;
      else
	cout << "No" << endl;
    else
      cout << "No" << endl;
  else
    cout << "No" << endl;
}