#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool isp[1000000]={};


void makeEra(){
    for(int i=2;i<=1000;i++){
        if( isp[i] ){
            for(int j=2;j<=1000000/i;j++){
                isp[i*j]=false;
            }
        }
    }
}


int main(){
    rep(i,1000000)isp[i]=true;
    isp[0]=isp[1]=false;
    makeEra();
    
    int n;
    while(cin>>n){
        int c = 0;
        rep(i,n+1){
            if(isp[i])c++;
        }
        cout<<c<<endl;
    }
}