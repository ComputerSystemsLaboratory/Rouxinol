#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >>a >>b >>c;
    int i=a;
    int d=0;
    while(i<=b){
        
       if(c%i==0) {
          d++;
        
       }
       i++; 
    }
   cout <<d<<endl;
    
    return 0;
}
