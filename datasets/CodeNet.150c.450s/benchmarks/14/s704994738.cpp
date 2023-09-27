#include<iostream>
using namespace std;

int main(){
 int n,i = 1,f = 0;

 cin >> n;

 while(++i <= n){
  int x = i;

  if(x % 3 == 0){
   cout << " " << i;
  } else {
   do{
    if(x % 10 == 3){
     cout << " " << i;
     f = 1;
     break;
    }
    x /= 10;
   }while(x);
  }
 }

 cout << endl;
}