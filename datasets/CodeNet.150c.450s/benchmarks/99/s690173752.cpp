#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(string a,string b){
    vector<int> m(4),n(4),o(4);
    int x=0,y=0,z=0;
    string c="mcxi";
    for(auto i=a.begin();i!=a.end();i++){
        if(*i>='0'&&*i<='9'){
            m[c.find(*(i+1))]=*i-'0';
        }
    }
    for(int i=0;i<c.size();i++){
        if(a.find(c[i])!=string::npos&&!m[i])m[i]++;
    }
    for(int i=0;i<m.size();i++){
        x+=m[i]*pow(10,3-i);
    }
        for(auto i=b.begin();i!=b.end();i++){
        if(*i>='0'&&*i<='9'){
            n[c.find(*(i+1))]=*i-'0';
        }
    }
    for(int i=0;i<c.size();i++){
        if(b.find(c[i])!=string::npos&&!n[i])n[i]++;
    }
    for(int i=0;i<n.size();i++){
        y+=n[i]*pow(10,3-i);
    }
    z=x+y;
    for(int i=0;i<o.size();i++){
        o[i]=(z/(int)pow(10,3-i))%10;
    }
    for(int i=0;i<o.size();i++){
        if(o[i]){
            if(o[i]!=1)cout<<o[i];
            cout<<c[i];
        }
    }
    cout<<endl;
}

int main(void){
    int n;
    cin>>n;
    string a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        solve(a,b);
    }
}

