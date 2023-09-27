#include <iostream>
 
using namespace std;
 
int main(){
 
    unsigned long long a,b,c,d;
 
    while(cin>>a>>b){
        c=a;
        d=b;
        while(1){
            if(c>d)c=c-d;
            if(c<d)d=d-c;
            if(c==d){
                cout<<c<<" "<<a*b/c<<endl;
                ;break;}
        }}
         
 
 
return 0;
}