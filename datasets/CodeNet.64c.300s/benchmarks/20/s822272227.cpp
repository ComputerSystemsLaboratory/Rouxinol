#include<iostream>
using namespace std;

int main(){
    int d,a;
    while(cin>>d){
        a=0;
        for(int i=0;i+d<=600;i+=d)
            a+=d*i*i;
        cout<<a<<endl;
    }
}