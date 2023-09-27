#include <iostream>
using namespace std;

int main()
{
  int mount[11];
  for(int i=1; i<11; i++){
    cin >> mount[i];
  }

  for(int i=1; i<10; i++){
    for(int j=i+1; j<11; j++){
      if( mount[i] < mount[j] ){
	int temp;
	temp = mount[i];
	mount[i] = mount[j];
	mount[j] = temp;
      }
    }
  }

  cout << mount[1] << endl
       << mount[2] << endl
       << mount[3] << endl;
  return 0;
}