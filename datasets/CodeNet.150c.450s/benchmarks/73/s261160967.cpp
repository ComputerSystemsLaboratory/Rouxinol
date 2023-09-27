#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pint;

int bit[1<<17+1],N;
int sum(int i){
    int s=0;
    while(i>0){
        s +=bit[i];
        i -=i&-i;
    }
    return s;
}
void add(int i,int x){
    while(i<=N){
        bit[i]+=x;
        i +=i&-i;
    }
}
int main(){
    int n,q,c,x,y;
    cin>>N>>q;
    rep(i,q){
        cin>>c>>x>>y;
        if(c==0) add(x,y);
        else{
            cout<<sum(y)-sum(x-1)<<endl;
        }
    }
    return 0;
}