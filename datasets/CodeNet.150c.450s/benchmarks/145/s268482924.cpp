#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string w,ans="";
    int n=0;
    map<string,int> s;
    while(cin>>w){
        s[w]++;
        n=max(n,s[w]);
        if(ans.size()<w.size()){ans=w;}
    }
    for(auto p=s.begin();p!=s.end();++p){
        if(p->second==n){cout<<p->first<<' ';}
    }
    cout<<ans<<endl;
}
