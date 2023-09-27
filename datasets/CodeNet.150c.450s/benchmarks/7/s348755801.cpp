#include <iostream>
using namespace std;

int main()
{
 int h[10];
 for(int i=0; i<10; i++) cin >> h[i];

 for(int i=0; i<3; i++){
  int n = h[0];
  int m = 0;
  for(int j=1; j<10; j++)
   if(n < h[j]){
    n = h[j];
    m = j;
   }
  cout << n << '\n';
  h[m] = -1;
 }

 return 0;
}