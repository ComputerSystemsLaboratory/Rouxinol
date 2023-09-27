#include<iostream>
using namespace std;
 
int Euclied(int x,int y){
   int a,b,c,r;
   if(x>=y){
     a = x;b = y;
   }else{
     a = y;b = x;
   }
   r = a % b;
   c = b; 
   while(r>0){
     c = r;
     r = a % b;
     a = b;
     b = r;
   }
   return c;
}
 
int main(){
   int x,y,gcd;
 
   cin >> x >> y;
   gcd = Euclied(x,y);
 
   cout << gcd << endl;
 
   return 0;
}