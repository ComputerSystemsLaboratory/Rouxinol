#include <iostream>
using namespace std;
int main(){
 int n, x;
 int y = 0;
 while(1){
  cin >> n >> x;
  if(n == 0 && x == 0)
   break;
  for(int a=1; a<=n; a++){
   for(int b=2; b<=n; b++){
    for(int c=3; c<=n; c++){
     if(a+b+c == x && a < b && b < c)
      y++;
    }
   }
  }
  cout << y << endl;
  y = 0;
 }
 return 0;
}