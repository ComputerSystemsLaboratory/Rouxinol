#include <iostream>
using namespace std;

int main()
{
  int n;
  int sum = 100000;
  cin >> n;
  for(int i=0; i<n; i++){
    sum = sum*1.05;
    if( sum%1000 != 0 ){
      sum = ((sum/1000)+1)*1000;
    }
  }
  cout << sum << endl;
  return 0;
}