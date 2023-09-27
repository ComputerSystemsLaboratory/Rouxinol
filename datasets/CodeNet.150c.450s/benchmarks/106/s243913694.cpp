#include<iostream> 
using namespace 
std; int main(){
    int a,b,c,S;
    cin>>a>>b>>c;
    while(a<=b){
        if(c%a==0)
            S++;
         a++;
        
    }
    cout<<S<<endl;
}
