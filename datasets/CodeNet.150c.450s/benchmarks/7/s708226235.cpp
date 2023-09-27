#include<iostream>

using namespace std;

int main(){
    int a[10];
    for(int i=0;i<10;i++)cin>>a[i];
    
    int x=-1,y=-1,z=-1;
    for(int i=0;i<10;i++){
        if(a[i]>x){
            z=y;
            y=x;
            x=a[i];
        }else if(a[i]>y){
            z=y;
            y=a[i];
        }else if(a[i]>z){
            z=a[i];
        }
    }
    cout<<x<<endl<<y<<endl<<z<<endl;
    
    return 0;
}