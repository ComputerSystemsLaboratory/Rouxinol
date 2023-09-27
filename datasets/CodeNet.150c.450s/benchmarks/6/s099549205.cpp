#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a<b){
            if(b<c) cout<<"Yes";
            else    cout<<"No";
        }
        else    cout<<"No";
        cout<<endl;
}
