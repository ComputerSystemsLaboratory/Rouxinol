#include <iostream>
using namespace std;
int main(void){
       int a;
       int b;
       int c;
       cin>>a;
       cin>>b;
       cin>>c;
      if(a>b){
          swap(a,b);
      }
       if(b>c){
        swap(b,c);
      }
         if(a>b){
      swap(a,b);
      }  
      cout<<a<<" "<<b<<" "<<c<<endl;
}
