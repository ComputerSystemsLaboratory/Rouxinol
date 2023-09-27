#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <complex>
using namespace std;

int main() {
   int n;
   cin >> n;

   int tp = 0, hp = 0;
   for(int i = 0; i < n; i++){
       string t, h;
       cin >> t >> h;
       if(t > h){
           tp += 3;
       }
       if(t < h){
           hp += 3;  
       }
       if(t == h){
           tp += 1;
           hp += 1;
       }      
   }
   cout << tp << " " << hp << endl;
}
