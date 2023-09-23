#include<bits/stdc++.h>

#define rep(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOR(i,a,b) for(int (i)=(a);i<(b);++(i))
#define ALL(obj) (obj).begin(),(obj).end()
#define space <<" "<<
#define ll long long
#define bpm %1000000007

using namespace std;

ll powAns(ll,ll);

int main(){
    int r,c,s;
    cin>>r>>c;
    int T[r+1][c+1];
    rep(i,r){
        s=0;
        rep(j,c){
        cin>>T[i][j];
        s+=T[i][j];
        }
    T[i][c]=s;
    }
    rep(i,c+1){
        s=0;
    rep(j,r){
        s+=T[j][i];
    }
    T[r][i]=s;
    }
    rep(i,r+1){
        rep(j,c+1){
        if(j==c){
        cout<<T[i][j]<<endl;
        }else{
        cout<<T[i][j]<<" ";
        }
        }
    }
}

ll powAns(ll m ,ll n){
    ll res=1;
    while(n>0){
        if(n & 1)res = res*m bpm;

        m=m*m bpm;
        n>>=1;
    }

    return res;
}

