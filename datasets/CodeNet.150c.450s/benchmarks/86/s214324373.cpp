#include <bits/stdc++.h>
using namespace std;

void solve(int n,int m,int p){
    vector<int> v;
    int a;
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a;
        sum+=a;
        v.push_back(a);
    }
    if(v[m-1]) cout<<(sum*(100-p)/v[m-1])<<endl;
    else cout<<0<<endl;
}


int main(void){
    int a,b,c;
    while(cin>>a>>b>>c,a){
        solve(a,b,c);
    }
    
}