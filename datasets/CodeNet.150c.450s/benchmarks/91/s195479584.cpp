#include<iostream>
using namespace std;
int main(){
    int a,o=0;
    bool n[1000000];
    for(int i=2;i<=999999;i++){
        n[i]=true;
    }
    n[0]=n[1]=false;
        for( int j=2;j*j<=999999;j++){
            if(n[j]){
                for(int k=j*2;k<=999999;k+=j){
                n[k]=false;
                }
            }
        }
        while(cin>>a){
    for(int k=2;k<=a;k++) if(n[k]) o++;
    cout<<o<<endl;
    o=0;
        }
}