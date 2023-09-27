#include<bits/stdc++.h>
using namespace std;

int main(){
    string in;
    string p,q;
    int ma=0;
    map<string,int>mp;

    while(cin>>in){
        if(in.size()>q.size())q=in;
        mp[in]++;
        if(ma<mp[in]){
            ma=mp[in];
            p=in;
        }
    }
    cout<<p<<" "<<q<<endl;
}