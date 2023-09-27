#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int w,n;
    int W[30],a,b;
    
cin>>w>>n;
    for(int i=1;i<=30;i++){
       W[i]=i;
    }
       for(int i=1;i<=n;i++){
        (cin>>a).ignore()>>b;
swap(W[a],W[b]);
    } 
        for(int i=1;i<=w;i++){
    cout<<W[i]<<endl;
        }
}