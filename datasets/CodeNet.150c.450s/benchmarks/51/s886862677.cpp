#include<bits/stdc++.h>
using namespace std;
bool f[30];
int main(){
    for(int i=0;i<28;i++){
        int a;cin>>a;--a;
        f[a]=true;
    }

    for(int i=0;i<30;i++){
        if(!f[i])cout<<i+1<<endl;
    }
    return 0;
}