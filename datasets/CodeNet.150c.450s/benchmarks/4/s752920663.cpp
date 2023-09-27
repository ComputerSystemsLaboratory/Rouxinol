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
    int m,f,r;
    while(1<2){
    cin>>m>>f>>r;
    int t=m+f;
    if(m==-1&&f==-1&&r==-1)break;
    if(m==-1||f==-1)cout<<"F"<<endl;
    else if(t<30)cout<<"F"<<endl;
    else if(t<50)if(r<50)cout<<"D"<<endl;
    else cout<<"C"<<endl;
    else if(t<65)cout<<"C"<<endl;
    else if(t<80)cout<<"B"<<endl;
    else cout<<"A"<<endl;
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

