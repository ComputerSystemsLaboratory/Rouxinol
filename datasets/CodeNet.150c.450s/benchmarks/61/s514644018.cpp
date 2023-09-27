#include <bits/stdc++.h>
using namespace std;
void solve(int n,int a,int b,int c,int x){
    list<int> s; 
    int in;
    for(int i=0;i<n;i++){
        cin>>in;
        s.push_back(in);
    }
    for(int i=0;i<=10000;i++){
        if(*s.begin()==x){
            s.pop_front();
        }
        if(!s.size()){
            cout<<i<<endl;
            return;
        }
        x=(a*x+b)%c;
    }
    cout<<"-1"<<endl;
}



int main(void){
    int a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e,a){
        solve(a,b,c,d,e);
    }
}