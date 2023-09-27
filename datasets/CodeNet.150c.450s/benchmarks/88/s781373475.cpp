#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rep(i,n) for(int i=0;i<n;i++)
using vi=vector<int>;
using vvi=vector<vi>;
using pii=pair<int,int>;
int f(pii a){return (a.first*a.first + a.second*a.second)*200 + a.first;}

int main(void){
    int n,m;
    vector<pii> stat;
    for(int i=1;i<151;i++)for(int j=i+1;j<151;j++){
        stat.emplace_back(i,j);
    }
    //sort(all(stat),[](pii a, pii b){return a.first<b.first;});
    sort(all(stat),[](pii a, pii b){return f(a)<f(b);});
    //for(auto i:stat)if(f(i)>=980*980+1000000)cout<<i.first<<" "<<i.second<<"("<<f(i)<<")"<<endl;
    while(cin>>n>>m,n|m){
        pii data=*(find(all(stat),make_pair(n,m))+1);
        cout<<data.first<<" "<<data.second<<endl;
    }
}