#include <iostream>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

ll n,k,W[100000];

//?????§????????????:??\???,????????§????????????????????°:??????
int V(ll P){
    ll w;
    int i=0;
    rep(j,k){
        w=0;
        while(w+W[i]<=P){
            w+=W[i];
            i++;
            if(i==n) return n;
        }
    }
    return i;
}

ll bina(){
    ll left=0;
    ll right=100000*10000;
    ll mid;
    while(right-left>1){
        mid=(right+left)/2;
        ll v=V(mid);
        if(v>=n) {right=mid;}
        else {left=mid;}
    }
    return right;
}

int main(void){
    cin >> n >> k;
    rep(i,n){
        cin >> W[i];
    }
    cout << bina() <<endl;
    return 0;
}