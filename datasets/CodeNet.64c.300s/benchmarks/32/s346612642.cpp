#include <iostream>
using namespace std;
int main(void){
    
    int n;
    int ai;
    long long x=10000000000,y=(-100000000000),z=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
     cin>>ai;   
        
        if(ai<x){
        x=ai;    
        }
        
        if(ai>y){
            y=ai;
        }
        
        z=ai+z;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
}

