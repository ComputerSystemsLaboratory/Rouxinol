#include <iostream>
using namespace std;

int main()
{
  int w,h,x,y,r;
  cin >> w >> h >> x >> y >>r;
  if(x>0 && x<w && y>0 && y<h && x-r>=0 && x+r<=w && y-r>=0 && y+r<=h){ 
      cout << "Yes" <<endl;
  } else{
    cout << "No" <<endl;
  }
return 0;
}