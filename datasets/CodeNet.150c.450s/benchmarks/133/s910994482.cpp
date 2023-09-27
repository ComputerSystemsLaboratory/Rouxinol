#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

int main(){
    int d;
    cin>>d;
    vector<ll> c(26),last(26,-1),v(d);
    vector<vector<int>> s(d,vector<int>(26));
    for(int i=0;i<26;i++){
        cin>>c[i];
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<26;j++){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<d;i++){
        if(i) v[i]=v[i-1];
        int t;
        cin>>t;
        t--;
        v[i]+=s[i][t];
        last[t]=i;
        for(int j=0;j<26;j++) v[i]-=c[j]*(i-last[j]);
    }
    for(int a : v) cout<<a<<endl;
}