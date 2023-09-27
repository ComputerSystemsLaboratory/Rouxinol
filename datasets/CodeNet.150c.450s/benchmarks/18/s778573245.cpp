#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    int mon=100000;
    cin>>n;
    for(int i=0; i<n;i++){
        int sum=mon*1.05;
        int num=(sum+999)/1000;
        mon=num*1000;
    }
    cout<<mon<<endl;
    return 0;
}