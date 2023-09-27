#include <iostream>

using namespace std;

int main(){
   bool a[31]={false};
   int in;
   for(int i=1;i<29;i++){
      cin >> in;
      a[in] = true;
   }
   for(int i=1;i<31;i++){
      if(!a[i]) cout << i << endl;
   }
   return 0;
}