#include <iostream>
#include <string>
using namespace std;

int main()
{
 int i = 1;
 int x;
 while (cin >> x) {
   if ( x == 0 ){
     break;
   }
   cout << "Case" << " " << i << ": " << x << endl;
   ++i;
 }
}