#include <cstdio>
#include <iostream>
using namespace std;
int main(){
 int n,i,x;
 scanf("%d",&n);
 i=1;
 do {
  x=i;
  if(x%3==0){
   cout << " " << i;
  } else do {
   if ( x%10 == 3 ) {
      cout << " " << i;
      x=0; 
   } 
  } while (x/=10,x>0);
 } while (++i <= n);
 cout << endl;
};

   
    