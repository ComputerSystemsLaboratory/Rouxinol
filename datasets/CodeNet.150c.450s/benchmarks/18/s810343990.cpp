#include <iostream>
using namespace std;
int main(){
    int a=100000,b=0,t;
    cin>>t;
      for(int k=0;k<t;k++){
         b=a*1.05;
         b=(b+999)/1000*1000;
         a=b;
       }
     cout<<a<<endl;
}