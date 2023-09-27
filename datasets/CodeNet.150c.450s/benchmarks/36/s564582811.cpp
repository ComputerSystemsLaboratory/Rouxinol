#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int d;
    while(cin>>d){
         int a;
         a=600/d;
         int b=0;
         for(int i=0;i<a;i++){
            b+=d*i*d*i*d;
         }
         cout<<b<<endl;
    }
}
