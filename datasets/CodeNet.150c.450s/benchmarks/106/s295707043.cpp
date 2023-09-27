#include <iostream>
using namespace std;
int main(void){
    // Your code here!
   int a,b,c,d=0;
   cin>>a>>b>>c;
   for(int i=a;i<=b;i++)
   {
        if(c%i==0){d=d+1;}  
   }
   cout<<d<<endl;
}

