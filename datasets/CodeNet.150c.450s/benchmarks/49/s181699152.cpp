#include <iostream>
#include<stdio.h>
using namespace std;
int main(void){
   int n;
   int x;
   while(1){
       int max=-1,min=1001;
       int S=0;
       cin>>n;
       if(n==0){
           break;
       }
       for(int i=0;i<n;i++){
            cin>>x;
            if(min>x){
                min=x;
            }
            if(max<x){
                max=x;
            }
           S=S+x;            
       }
       cout<<(S-(max+min))/(n-2)<<endl;
   }
   return 0;
}
