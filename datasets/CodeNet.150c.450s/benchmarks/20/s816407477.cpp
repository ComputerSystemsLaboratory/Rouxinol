#include <iostream>

using namespace std;


int main(){
   int i,j;
   cin >> i;
   if(i >= 0 && i <= 86400){
       cout << i / 3600  << ":" << (i % 3600) / 60 << ":" << (i % 3600) % 60 << endl;
   }else{
       return -1;
   }

   return 0;
}
