#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    while(cin>>n,n){
        map<int,pair<int,int>> sq,vec;
        sq[0]=make_pair(0,0);
        vec[0]=make_pair(-1,0);
        vec[1]=make_pair(0,1);
        vec[2]=make_pair(1,0);
        vec[3]=make_pair(0,-1);
        int wn=0,wx=0,hn=0,hx=0;
        for(int i=1;i<n;i++){
            int a,b;
            cin>>a>>b;
            sq[i]=make_pair(sq[a].first + vec[b].first, sq[a].second + vec[b].second);
            wn=min(wn,sq[i].first);
            wx=max(wx,sq[i].first);
            hn=min(hn,sq[i].second);
            hx=max(hx,sq[i].second);
        }
        cout<<wx-wn+1<<" "<<hx-hn+1<<endl;
    }
}