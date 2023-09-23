#include <iostream>
using namespace std;
int main(){
    int a[28],b;
    for(int i=0;i<28;i++){
        cin>>a[i];
    }
    for(int i=1;i<=30;i++){
        b=0;
        for(int j=0;j<28;j++){
            if(a[j]==i){
                b=1;
            }
        }
        if(b==0){
        cout<<i<<endl;
        }
    }
}