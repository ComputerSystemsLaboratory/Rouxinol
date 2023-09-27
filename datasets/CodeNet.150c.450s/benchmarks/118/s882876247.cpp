#include <bits/stdc++.h>
using namespace std;

#define XDAY 196471

void solve(int y,int m,int d){
    int today=1;
    for(int i=1;i<y;i++){
        if(i%3) today+=195;
        else today+=200;
    }
    for(int i=1;i<m;i++){
        if(i%2||!(y%3)) today+=20;
        else today+=19;
    }
    today+=(d-1);
    cout<<XDAY-today<<endl;
}

int main(void){
    int n;
    int a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        solve(a,b,c);
    }
}