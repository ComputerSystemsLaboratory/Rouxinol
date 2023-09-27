#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)

int main(){
    int n,m;
    while(cin>>n>>m,n|m){
        bool found=false;
        bool *T = new bool[101];
        bool *H = new bool[101];
        rep(i,101)T[i]=H[i]=false;
        int sumT=0,sumH=0,tmp;
        rep(i,n){
            cin>>tmp;
            T[tmp]=true;
            sumT+=tmp;
        }
        rep(i,m){
            cin>>tmp;
            H[tmp]=true;
            sumH+=tmp;
        }
        int d=sumT-sumH;
        if(d%2){
            cout<<-1<<endl;
            continue;
        }
        d/=2;

        for(int i=max(d,0);i<=100;i++){
            if(T[i]&&H[i-d]){
                cout<<i<<" "<<i-d<<endl;
                found=true;
                break;
            }
        }
        if(!found)cout<<-1<<endl;
    }
    return 0;
}