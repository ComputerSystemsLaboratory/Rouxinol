#include<iostream>
#include<vector>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

void solve(){
    int m,mn,mx;
    cin>>m>>mn>>mx;
    if(m==0){
        exit(0);
    }
    vector<int>P(m);
    REP(i,m){
        cin>>P[i];
    }
    int mx_d=0;
    int ans=0;
    for(int i=mn;i<=mx;i++){
        int dif=P[i-1]-P[i];
        if(dif>=mx_d){
            mx_d=dif;
            ans=i;
        }
    }
    cout<<ans<<endl;
}
int main(){
    while(true)solve();
}
