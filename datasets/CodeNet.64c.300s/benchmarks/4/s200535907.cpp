#include <iostream>
using namespace std;

int main(){
 int a, b, c;
 cin >> a >> b >> c;
 int i = 0;
 if(a < b){
   if(b < c){
      i = 1;
   }
 }

 if(i == 1){ cout << "Yes" << endl; }
 else{ cout << "No" << endl;}
 
}