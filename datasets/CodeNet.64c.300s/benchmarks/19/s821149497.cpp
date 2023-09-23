#include<iostream>
using namespace std;
int main(){
    int n=0,a[5000],saidai=-100000,kazu;
    while(cin>>n && n!=0){
saidai=-100000;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            kazu=0;
            for(int x=i;x<n;x++){
                kazu=kazu+a[x];
                if(saidai<kazu){
                    saidai=kazu;
                }
            }
        }
        cout<<saidai<<endl;
    }
}