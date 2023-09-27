#include <iostream>
using namespace std;

int main()
{
 int a, b;

 while(cin >> a >> b){
  int mas = a + b;
  int n = 0;
  while(true){
   n++;
   mas /= 10;

   if(mas == 0) break;
  }
  cout << n << '\n';
 }

 return 0;
}