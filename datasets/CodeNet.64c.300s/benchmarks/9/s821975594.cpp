#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double a=100;
    for(int i=0;i<n;i++){
        a*=1.05;
        if((a-(int)a)>0)a+=(1-(a-(int)a));
    }
    cout<<(int)a<<0<<0<<0<<endl;
}