#include <iostream>
using namespace std;

int main()
{
  int a[5];
  int temp;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  for(int i=0; i<4; i++){
    for(int j=i+1; j<5; j++){
      if( a[i]<a[j] ){
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      }
    }
  }
  cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;

  return 0;
}