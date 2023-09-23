#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a,b;
  int answer[20];
  int count = 0;
  while(cin >> a >> b){
    answer[count] = (int)log10(a+b) +1;
    cout << answer[count] << endl;
  }
  return 0;
}