#include<iostream>
using namespace std;
int main(){
    int a,b,c,i;
    int j=0;
    cin>>a>>b>>c;
    for(i=a;i<b+1;i++){
        if(c%i==0)j++;
    }   
    cout<<j<<"\n";                                                      
}
