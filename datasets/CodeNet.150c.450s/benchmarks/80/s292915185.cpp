#include <iostream>
using namespace std;
int main(){
    int a[4]={},b[4]={};
    int x=0,y=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
        x+=a[i];
    }
    for(int j=0;j<4;j++){
        cin>>b[j];
        y+=b[j];
    }
    
    if(x>=y)cout<<x<<endl;
    else cout<<y<<endl;
    
}