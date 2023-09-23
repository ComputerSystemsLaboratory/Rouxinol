#include <iostream>
using namespace std;

int main(){
  while(true){
    int e;
    cin >> e;
    if(e == 0) break;

    int m;
    m = e;

    for(int z = 0 ; z * z * z <= e ; z++){
      for(int y = 0 ; y * y + z * z * z <= e ; y++){
	int x = e - z * z * z - y * y;
	if(m > x + y + z) m = x + y + z;
      }
    }
    cout << m << endl;
  }
}