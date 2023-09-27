#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,k[100]={0},max=0;
    while(cin>>n){
        k[n]++;
        if(max<k[n]){
           max=k[n];
        }
    }
    for(int i=0;i<100;i++){
        if(k[i]==max){
            cout<<i<<endl;
        }
    }
}