#include <iostream>

using namespace std;

int main(){
  while(true){
    int n,a,b,c,x,y,r;
    cin >> n >> a >> b >> c >> x;
    if (n == 0)
	break;
    cin >> y;
    r = 0;
    while(r <= 10000){
      if (x == y){
	n--;
	if (n>0){
	  cin >> y;
	}
	else{
	  break;
	}
      }
      x = (a*x+b)%c;
      r++;
    }
    n--;
    while(n>0){
      cin >> y;
      n--;
    }
    if (r == 10001)
      r = -1;
    cout << r << endl;
  }
  return 0;
}