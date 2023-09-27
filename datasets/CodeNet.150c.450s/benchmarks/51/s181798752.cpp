#include <iostream>
using namespace std;

#define rep(i,b) for(int i=0; i<(b); i++)

int main(){
    bool sub[31]={1};
    rep(i,30){ int t; cin>>t; sub[t]=1; }
    rep(i,31){ if(!sub[i])cout<<i<<endl; }
}