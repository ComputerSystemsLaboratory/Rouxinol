#include <iostream>
using namespace std;

int main() {

  while(1) {
    int x,y,s;
    cin >> x >> y >>s;
    if(x == 0 && y == 0&&s==0) break;

    int maxab = 0;
    int maxy = 0;
    for(int i=1;i<s;i++){
      int a = i*(100.0+x)/100;
      for(int j=1;j<s;j++){
	int b = j*(100.0+x)/100;
	if(a+b==s && maxab <= a+b) {
	  maxab = a+b;
	  int ya = i*(100.0+y)/100;
	  int yb = j*(100.0+y)/100;
	  if(ya+yb > maxy) maxy = ya+yb;//,cout << i << " "<<j<<endl;
	}
      }
    }
    cout << maxy<<endl;
	
  }
      
  return 0;
}