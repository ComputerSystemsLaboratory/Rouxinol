#include<iostream>
using namespace std;
int swap(int, int);
int main(){
   int a,b,c,tmp;
   
   cin >> a >> b >> c;
   
   if (a < b) {
       
   } else {
       tmp = a;
       a = b;
       b = tmp;
      
   }

   if (a < c) {
       
   } else {
       tmp  = a;
       a = c;
       c = tmp;
      
   }

   if ( b < c) {
       
   } else {
       tmp = b;
       b = c;
       c = tmp;
       
   }

   cout << a << " " << b << " " << c << endl;
 
  
    return 0;
}