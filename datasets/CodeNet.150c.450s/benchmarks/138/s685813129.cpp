#include<iostream>
using namespace std;

int main(){
    int x,y,k;
    cin>>x>>y;
    
    if(x<y){
        k=x;
        x=y;
        y=k;
    }
    while(y!=0){
    x=x%y;
    k=x;
    x=y;
    y=k;
    
    }
    
    cout<<x<<endl;
}