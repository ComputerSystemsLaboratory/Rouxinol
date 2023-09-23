#include <iostream>
using namespace std;

int main(void)
{
   int a, b, keta;

   while(cin >> a >> b){
      a+=b;
      keta=1;
      while((a/=10)!=0) keta++;
      cout << keta << endl;
   }
   return 0;
}