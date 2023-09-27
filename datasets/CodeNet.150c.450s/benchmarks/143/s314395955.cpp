#include <bits/stdc++.h>


typedef long long ll;

using namespace std;


const ll mod=1000000007;


typedef vector<vector<int> > Graph;

Graph g;


ll suji[100001];

int  main(){

    ll N;
    cin>>N;

    ll a;

    ll sum=0;
   

    for(int i=0;i<N;i++){
        cin>>a;
        ++suji[a];
        sum+=a;
    }
    ll Q;
    cin>>Q;
    ll b,c;
    ll ans[Q];
    for(ll q=0;q<Q;q++){
        cin>>b>>c;
        sum+=suji[b]*(c-b);
        suji[c]+=suji[b];
        suji[b]=0;
        ans[q]=sum;
    } 

    for(ll q=0;q<Q;++q){
        cout<<ans[q]<<endl;
    }
}
