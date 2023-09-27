#include<iostream>
#include<map>

using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)



int main(){
    while(1){
    string ans="";
    map<char,char> x;
    int m,n;
    cin>>m;
        if(m==0)break;
    rep(i,m){
        char a,b;
        cin>>a>>b;
        x[a]=b;
    }
    cin>>n;
    rep(i,n){
        char tm;
        cin>>tm;
        if(x.count(tm)==0){
            ans+=tm;
        }
        else{
            ans+=x[tm];
        }
    }
    cout<<ans<<endl;
    
    }
    return 0;
    
}