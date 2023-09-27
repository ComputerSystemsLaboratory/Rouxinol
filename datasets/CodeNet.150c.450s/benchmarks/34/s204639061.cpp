#include <iostream>
using namespace std;
int main(){
    int v[50];
    v[0]=1;
    v[1]=v[0];
    v[2]=v[1]+v[0];
    for(int i=3;i<=30;i++){
        v[i]=v[i-1]+v[i-2]+v[i-3];
    }
    int n;
    while(1){
        cin>>n;
        if(n==0)break;
        cout<<((v[n]+9)/10+364)/365<<endl;
    }
}