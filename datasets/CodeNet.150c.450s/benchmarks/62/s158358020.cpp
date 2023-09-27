#include <iostream>
using namespace std;

int main(){
    int a[3];
    int i,t;
    for (i = 0; i < 3; i++) {
        cin>>a[i];
    }
    if (a[0]>a[1]){
        t=a[0];
        a[0]=a[1];
        a[1]=t;
    }
    if (a[1]>a[2]){
        t=a[1];
        a[1]=a[2];
        a[2]=t;
    }
    if (a[0]>a[1]){
        t=a[0];
        a[0]=a[1];
        a[1]=t;
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    return 0;
}

