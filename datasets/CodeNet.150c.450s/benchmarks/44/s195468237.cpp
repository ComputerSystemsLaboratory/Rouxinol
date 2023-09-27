#include <iostream>
using namespace std;

int main()
{
 int a[4];

 while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
  int hit = 0, blow = 0;
  for(int i=0; i<4; i++){
   int n;
   cin >> n;
   if(n == a[i]){
    hit++;
    continue;
   }
   for(int j=0; j<4; j++){
    if(n == a[j]){
     blow++;
     break;
    }
   }
  }
  cout << hit << ' ' << blow << '\n';
 }
 
 return 0;
}