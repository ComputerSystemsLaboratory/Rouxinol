#include<iostream>
using namespace std;

int main(){
   int a,b,c,d;
   d = 0;
   cin >> a >> b >> c;
   while (a <= b){
      if (c % a == 0){
         d = d+1;
      }
      a = a+1;
   }
   cout << d <<endl;
   return 0;
}