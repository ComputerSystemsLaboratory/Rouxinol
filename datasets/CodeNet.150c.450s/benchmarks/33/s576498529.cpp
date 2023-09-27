#include <iostream>
using namespace std;
int main(){
  int x,y,S;
  while(true) {
    cin >> x >> y >> S;
    int max = 0;
    if (x == 0 && y == 0 && S == 0)
      break;
    for (int i = 1; i < S;i++)
      for (int j = i;j < S;j++)
	if ( i * (100 + x)/100 + j * (100 +x)/100 == S)
	  if (max < i * (100 + y)/100 + j * (100 + y)/100)
	    max = i * (100 + y)/100 + j * (100 + y)/100;
    cout << max << endl;
  }
  
}