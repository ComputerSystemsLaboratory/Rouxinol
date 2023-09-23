#include <iostream>

using namespace std;


int main(){
   int i;

       cin >> i;
   if(i >=0 && i <= 1000) {
       cout << i * i * i << endl;
   }else{
       return -1;
   }
   return 0;
}
