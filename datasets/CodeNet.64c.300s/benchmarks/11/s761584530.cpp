#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
        int S;
        int h;
        int m;
        int s;
        cin>>S;
        h=S/60/60;
        m=(S-60*h*60)/60;
        s=S-h*60*60-m*60;
        cout<<h;
        cout<<":";
        cout<<m;
        cout<<":";
        cout<<s;
        cout<<endl;
}
