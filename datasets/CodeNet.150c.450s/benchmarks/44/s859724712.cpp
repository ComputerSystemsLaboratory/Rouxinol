#include <iostream>

using namespace std;

int main()
{
  int a1, a2, a3, a4;
  while(cin >> a1 >> a2 >> a3 >> a4){
    int a[4];
    int b[4];
    int H = 0, B = 0; 
    a[0] = a1;
    a[1] = a2;
    a[2] = a3;
    a[3] = a4;
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
	if(b[i] == a[j]){
	  B++;
	  if(i == j){
	    B--;
	    H++;
	  }
	}
      }
    }
    cout << H << ' ' << B << endl;
  }
}