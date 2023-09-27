/*
ei1333さんのライブラリ
verify
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A

*/
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>
#include <bitset>
#include<math.h>
#include<map>
#include<set>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> P;
#define bit(n,k) ((n>>k)&1) /*nのk bit目*/

typedef pair<ll,ll> P;
vector<P> prime_factor(ll N){
    vector<P> ret;
    int count=0;
    while(!(N&1)) N>>=1,count++;
    if(count) ret.emplace_back(2,count);

    for(ll i=3;i*i<=N;i++){
        if(N%i==0 ){
            int count=0;
            while(N%i==0){
                N/=i;
                count++;
            }
            ret.emplace_back(i,count);
        }
    }
    if(N!=1) ret.emplace_back(N,1);
    return ret;
}

signed main(void){
    int N;
    cin>>N;
    cout<<N<<":";
    vector<P> V=prime_factor(N);
    for(auto x: V){
        for(int i=0;i<x.second;i++) cout<<" "<<x.first;
    }
    cout<<endl;    
}
