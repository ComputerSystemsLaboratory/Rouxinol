#include<iostream>

using namespace std;

int main(){
   int a,b,c,D;
   cin >> a >> b >> c ;
   for(int x = a; x <= b; x++)
   if ( c % x < 1 ){ D += 1;}
   cout << D << endl;;
   return 0;
}

